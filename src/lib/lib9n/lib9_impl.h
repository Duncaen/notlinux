/*
 *  synchronization
 */
typedef struct Lock Lock;
struct Lock
{
	int init;
	pthread_mutex_t mutex;
};

extern	void	lock(Lock*);
extern	void	unlock(Lock*);
extern	int	canlock(Lock*);
extern	int	(*_lock)(Lock*, int, ulong);
extern	void	(*_unlock)(Lock*, ulong);	

char* get9root();
char* unsharp(char *);
