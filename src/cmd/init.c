#include <unistd.h>
#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>

typedef struct sv Service;

enum {
	DEP_WANTS,
	DEP_NEEDS,
};

enum {
	SV_UP,
	SV_DOWN,
	SV_DONE,
	SV_WAITS,
	SV_FAILED,
};

struct dep {
	Service *sv;
	int type;
	struct dep *next;
};

struct sv {
	pid_t pid;
	int fds[2];
	int status;
};

#ifndef MAX_SERVICES
# define MAX_SERVICES 1000
#endif
#define HASHMUL 79L

struct sv services[MAX_SERVICES];

long
hash(char *name)
{
	long h;
	char *p;

	h = 0;
	
	for (p = name; *p; h += *p++)
		h *= HASHMUL;
	if (h < 0)
		h = ~h;
	h %= MAX_SERVICES;

	return h;
}

int
readservice(struct sv *s, char *dir)
{
	s->status = 1;
	return 0;
}

int
findservices(char *dir)
{
	DIR *d;
	struct dirent *ent;
	struct sv *s;
	long h;

	if (!dir || !(d = opendir(dir)))
		return 1;

	while ((ent = readdir(d)) && ent->d_name[0] != '.') {
		h = hash(ent->d_name);
		s = &services[h];
		if (s->status != 0 || !readservice(s, ent->d_name))
			continue;
	}

	closedir(d);

	return 0;
}

int
main(int argc, char *argv[])
{
	int i;
	char *svdirs[] = {
		"/var/service",
		"/etc/sv",
	};
	for (i = 0; i < 2; i++)
		(void)findservices(svdirs[i]);

	/* for (;;) {} */

	_exit(0);
}
