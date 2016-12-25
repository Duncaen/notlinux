#include <u.h>

#include <utf.h>
#include <fmt.h>
#include <arg.h>

#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#define OREAD		O_RDONLY
#define OWRITE	O_WRONLY
#define ORDWR		O_RDWR

#define	OCEXEC 0
#define	ORCLOSE	0
#define	OTRUNC	0

#define nil ((void*)0)

#define seek(fd, offset, whence) lseek(fd, offset, whence)
#define create(name, mode, perm) creat(name, perm)

#define ERRMAX  128     /* max length of error string */

/* bits in Dir.mode */
#define DMDIR		0x80000000	/* mode bit for directories */
#define DMSYMLINK	0x02000000	/* mode bit for symbolic link (Unix, 9P2000.u) */
#define DMDEVICE	0x00800000	/* mode bit for device file (Unix, 9P2000.u) */
#define DMNAMEDPIPE	0x00200000	/* mode bit for named pipe (Unix, 9P2000.u) */
#define DMSOCKET	0x00100000	/* mode bit for socket (Unix, 9P2000.u) */

typedef
struct Dir {
	char	*name;	/* last element of path */
	ulong	mode;	/* permissions */
} Dir;

char* get9root();
char* unsharp(char *);

Dir* dirfstat(int);
long dirread(int, Dir **);
