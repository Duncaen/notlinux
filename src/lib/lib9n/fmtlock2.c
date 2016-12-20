#include <lib9.h>

#include "lib9_impl.h"

static Lock fmtlock;

void
__fmtlock(void)
{
	lock(&fmtlock);
}

void
__fmtunlock(void)
{
	unlock(&fmtlock);
}
