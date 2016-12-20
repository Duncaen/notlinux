#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>

#include <lib9.h>

int
_p9dir(struct stat *lst, struct stat *st, char *name, Dir *d, char **str, char *estr)
{
	char *s;
	int sz;

	sz = 0;
	if(d)
		memset(d, 0, sizeof *d);

	/* name */
	s = strrchr(name, '/');
	if(s)
		s++;
	if(!s || !*s)
		s = name;
	if(*s == '/')
		s++;
	if(*s == 0)
		s = "/";
	if(d){
		if(*str + strlen(s)+1 > estr)
			d->name = "oops";
		else{
			strcpy(*str, s);
			d->name = *str;
			*str += strlen(*str)+1;
		}
	}
	sz += strlen(s)+1;

	if (d) {
		if (S_ISLNK(lst->st_mode))	/* yes, lst not st */
			d->mode |= DMSYMLINK;
		else if (S_ISDIR(st->st_mode))
			d->mode |= DMDIR;
		else if (S_ISFIFO(st->st_mode))
			d->mode |= DMNAMEDPIPE;
		else if (S_ISSOCK(st->st_mode))
			d->mode |= DMSOCKET;
		else if (S_ISBLK(st->st_mode) || S_ISCHR(st->st_mode))
			d->mode |= DMDEVICE;
	}

	return sz;
}

