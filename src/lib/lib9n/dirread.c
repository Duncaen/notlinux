#include <sys/stat.h>
#include <dirent.h>

#include <lib9.h>

#if defined (__linux__)
#define _GNU_SOURCE
#define _LARGEFILE64_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <sys/syscall.h>

# if defined (_LARGEFILE64_SOURCE)
#  define getdents SYS_getdents64
# else
#  define getdents SYS_getdents
# endif

struct linux_dirent64 {
	int64_t        d_ino;    /* 64-bit inode number */
	int64_t 				d_off;    /* 64-bit offset to next structure */
	unsigned short d_reclen; /* Size of this dirent */
	unsigned char  d_type;   /* File type */
	char           d_name[]; /* Filename (null-terminated) */
};
#endif

extern int _p9dir(struct stat*, struct stat*, char*, Dir*, char**, char*);

#if defined(__linux__)
#define mydirent linux_dirent64
static int
mygetdents(int fd, struct dirent *buf, int n) {
  return syscall (getdents, fd, (void*) buf, n);
}
#elif defined(__APPLE__) || defined(__FreeBSD__)
static int
mygetdents(int fd, struct dirent *buf, int n)
{
	long off;
	return getdirentries(fd, (void*)buf, n, &off);
}
#elif defined(__OpenBSD__)
#include <sys/param.h>
# if OpenBSD < 201405 /* for OpenBSD 5.4 and earlier */
static int
mygetdents(int fd, struct dirent *buf, int n)
{
	off_t off;
	return getdirentries(fd, (void*)buf, n, &off);
}
# else
static int
mygetdents(int fd, struct dirent *buf, int n)
{
	return getdents(fd, (void*)buf, n);
}
# endif
#elif defined(__sun__) || defined(__NetBSD__)
static int
mygetdents(int fd, struct dirent *buf, int n)
{
	return getdents(fd, (void*)buf, n);
}
#elif defined(__AIX__)
static int
mygetdents(int fd, struct dirent *buf, int n)
{
	return getdirent(fd, (void*)buf, n);
}
#endif
#ifndef mydirent
#define mydirent dirent
#endif

static int
countde(char *p, int n)
{
	char *e;
	int m;
	struct mydirent *de;

	e = p+n;
	m = 0;
	while(p < e){
		de = (struct mydirent*)p;
		if(de->d_reclen <= 4+2+2+1 || p+de->d_reclen > e)
			break;
		if(de->d_name[0]=='.' && de->d_name[1]==0)
			de->d_name[0] = 0;
		else if(de->d_name[0]=='.' && de->d_name[1]=='.' && de->d_name[2]==0)
			de->d_name[0] = 0;
		m++;
		p += de->d_reclen;
	}
	return m;
}

static int
dirpackage(int fd, char *buf, int n, Dir **dp)
{
	int oldwd;
	char *p, *str, *estr;
	int i, nstr, m;
	struct mydirent *de;
	struct stat st, lst;
	Dir *d;

	n = countde(buf, n);
	if(n <= 0)
		return n;

	if((oldwd = open(".", O_RDONLY)) < 0)
		return -1;
	if(fchdir(fd) < 0)
		return -1;
		
	p = buf;
	nstr = 0;

	for(i=0; i<n; i++){
		de = (struct mydirent*)p;
		memset(&lst, 0, sizeof lst);
		if(de->d_name[0] == 0)
			/* nothing */ {}
		else if(lstat(de->d_name, &lst) < 0)
			de->d_name[0] = 0;
		else{
			st = lst;
			if(S_ISLNK(lst.st_mode))
				stat(de->d_name, &st);
			nstr += _p9dir(&lst, &st, de->d_name, nil, nil, nil);
		}
		p += de->d_reclen;
	}

	d = malloc(sizeof(Dir)*n+nstr);
	if(d == nil){
		fchdir(oldwd);
		close(oldwd);
		return -1;
	}
	str = (char*)&d[n];
	estr = str+nstr;

	p = buf;
	m = 0;
	for(i=0; i<n; i++){
		de = (struct mydirent*)p;
		if(de->d_name[0] != 0 && lstat(de->d_name, &lst) >= 0){
			st = lst;
			if((lst.st_mode&S_IFMT) == S_IFLNK)
				stat(de->d_name, &st);
			_p9dir(&lst, &st, de->d_name, &d[m++], &str, estr);
		}
		p += de->d_reclen;
	}

	fchdir(oldwd);
	close(oldwd);
	*dp = d;
	return m;
}

long
dirread(int fd, Dir **dp)
{
	char *buf;
	struct stat st;
	int n;

	*dp = 0;

	if(fstat(fd, &st) < 0)
		return -1;

	if(st.st_blksize < 8192)
		st.st_blksize = 8192;

	buf = malloc(st.st_blksize);
	if(buf == nil)
		return -1;

	n = mygetdents(fd, (void*)buf, st.st_blksize);
	if(n < 0){
		free(buf);
		return -1;
	}

	n = dirpackage(fd, buf, n, dp);
	free(buf);
	return n;
}
