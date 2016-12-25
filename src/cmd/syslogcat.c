#include <err.h>
#include <stdio.h>
#include <sys/klog.h>

static char buf[16384];

int
main()
{
	for (;;) {
		if (klogctl(2, buf, sizeof buf) == -1)
			err(1, "klogctl");
		fputs(buf, stdout);
		fflush(stdout);
	}
}
