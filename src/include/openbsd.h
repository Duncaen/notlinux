#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/statfs.h>

#define FAIL_INSTEAD_OF_TRYING_FALLBACK

/* XXX: x86_64 only, see sys/arch/$arch/include/_types.h */
#define ALIGNBYTES		(sizeof(long) - 1)
#define ALIGN(p) (((u_int)(p) + ALIGNBYTES) &~ ALIGNBYTES)

#define __UNUSED		__attribute__ ((unused))

#define __dead		__attribute__((__noreturn__))

#define __BEGIN_DECLS
#define __END_DECLS

#undef __weak_alias
#define __weak_alias(new, old) \
	extern __typeof(old) new __attribute__((weak, alias(#old)))

#define MAKE_CLONE(new, old) \
	extern __typeof(old) new __attribute__((weak, alias(#old)))

#define	_PW_BUF_LEN	1024
#define	_GR_BUF_LEN	1024

#define NOFILE_MAX	NOFILE

/* sys/sys/param.h */
/*
 * File system parameters and macros.
 *
 * The file system is made out of blocks of at most MAXBSIZE units, with
 * smaller units (fragments) only in the last direct block.  MAXBSIZE
 * primarily determines the size of buffers in the buffer pool.  It may be
 * made larger without any effect on existing file systems; however making
 * it smaller makes some file systems unmountable.
 */
#define	MAXBSIZE	(64 * 1024)

/* API definitions lifted from OpenBSD src/include */

/* pwd.h */
#define _PW_NAME_LEN 63

/* stdlib.h */

/* string.h */
#ifndef HAVE_EXPLICIT_BZERO
void explicit_bzero(void *, size_t);
#endif

/* unistd.h */
#ifndef HAVE_EXECVPE
int execvpe(const char *, char *const *, char *const *);
#endif /* !HAVE_EXECVPE */
#ifndef HAVE_SETRESUID
int setresuid(uid_t, uid_t, uid_t);
#endif /* !HAVE_SETRESUID */

#ifndef HAVE_PLEDGE
int pledge(const char *, const char *[]);
#endif /* !HAVE_PLEDGE */

#ifndef HAVE_CLOSEFROM
void closefrom(int);
#endif /* !HAVE_CLOSEFROM */

/* err.h */
void errc(int eval, int code, const char *fmt, ...);
void verrc(int eval, int code, const char *fmt, va_list ap);

void vwarnc(int code, const char *fmt, va_list ap);
void warnc(int code, const char *fmt, ...);


#ifndef HAVE_SETPROGNAME
const char * getprogname(void);
void setprogname(const char *progname);
#endif /* !HAVE_SETPROGNAME */

/* pwcache.c */
char *user_from_uid(uid_t, int);
char *group_from_gid(gid_t gid, int);

/* getbsize.c */
char *getbsize(int *, long *);

/* fmt_scaled.c */
#define	FMT_SCALED_STRSIZE	7
int scan_scaled(char *, long long *);
int fmt_scaled(long long, char *);

/* strmode.c */
void strmode(int, char *);

/* stdio.h */
wchar_t *fgetwln(FILE *, size_t *);

/* stdlib.h */
int heapsort(void *, size_t, size_t, int (*)(const void *, const void *));
int mergesort(void *, size_t, size_t, int (*)(const void *, const void *));
void *reallocarray(void *optr, size_t nmemb, size_t size);
int radixsort(const unsigned char **, int, const unsigned char *, unsigned);
void qsort(void *, size_t, size_t, int (*)(const void *, const void *));
int sradixsort(const unsigned char **, int, const unsigned char *, unsigned);
double strtod(const char *__restrict, char **__restrict);
long long strtonum(const char *, long long, long long, const char **);
unsigned long long strtoull(const char *__restrict, char **__restrict, int);
long double strtold(const char *__restrict, char **__restrict);

/* resolv.h */
/* base64.c */
int b64_ntop(unsigned char const *, size_t, char *, size_t);
int b64_pton(char const *, unsigned char *, size_t);

#define strtoq strtoll

/* inttypes.h */
intmax_t	strtoimax(const char *, char **, int);
uintmax_t	strtoumax(const char *, char **, int);

#define d_namlen d_reclen

/* XXX: read dynamically? */
#define UID_MAX 60000
#define GID_MAX 60000

/* sys/sys/stat.h */
#define	ACCESSPERMS	(S_IRWXU|S_IRWXG|S_IRWXO)	/* 00777 */
#define	ALLPERMS	 (S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO) /* 00666 */
#define	DEFFILEMODE	(S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)

#define S_ISTXT S_ISVTX

/* lib/libc/include/thread_private.h */
#define _MUTEX_LOCK(mutex)				do {} while (0)
#define _MUTEX_UNLOCK(mutex)				do {} while (0)

/* getentropy_linux.c */
int getentropy(void *buf, size_t len);

#define SHA512_Update SHA512Update
#define SHA512_CTX SHA2_CTX
#define SHA512_Init SHA512Init
#define SHA512_Final SHA512Final

/* setmode.c */
mode_t getmode(const void *, mode_t);
void *setmode(const char *);

/* crypt */
uint32_t arc4random(void);
void arc4random_buf(void *, size_t);
uint32_t arc4random_uniform(uint32_t);

/* setproctitle.c */
void setproctitle(const char *, ...);
