/*
 * To the extent possible under law, Christian Neukirchen has waived
 * all copyright and related or neighboring rights to this work.
 *
 * http://creativecommons.org/publicdomain/zero/1.0/
 */
#include <sys/reboot.h>
#include <sys/stat.h>

#include <signal.h>
#include <string.h>
#include <err.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#define STOPIT_FILE "/etc/runit/stopit"
#define REBOOT_FILE "/etc/runit/reboot"

typedef enum {NOOP, HALT, REBOOT, POWEROFF} action_type;

int
main(int argc, char *argv[])
{
	int do_sync = 1;
	int do_force = 0;
	int opt;
	const char *argv0;
	action_type action;

	action = NOOP;
	argv0 = *argv;

	if (strcmp(argv0, "halt"))
		action = HALT;
	else if (strcmp(argv0, "reboot"))
		action = REBOOT;
	else if (strcmp(argv0, "poweroff"))
		action = POWEROFF;
	else
		warn("no default behavior, needs to be called as halt/reboot/poweroff");

	while ((opt = getopt(argc, argv, "dfhinw")) != -1)
		switch (opt) {
			case 'f': do_force = 1; break;
			case 'n': do_sync = 0; break;
			case 'w': do_sync = 0; action = NOOP; break;
			case 'd':
			case 'h':
			case 'i': break;
			/* silently ignored */
			default:
				printf("usage: %s [-nf]", argv0);
				_exit(0);
		}

	if (do_sync) sync();
	if (action == NOOP) _exit(0);

	if (do_force)
		switch (action) {
		case HALT: reboot(RB_HALT_SYSTEM); err(1, "halt failed");
		case POWEROFF: reboot(RB_POWER_OFF); err(1, "poweroff failed");
		case REBOOT: reboot(RB_AUTOBOOT); err(1, "reboot failed");
		default: _exit(0);
		}

	if (open(STOPIT_FILE, O_WRONLY|O_NDELAY|O_TRUNC|O_CREAT, 0644) == -1)
		err(1, "unable to create %s", STOPIT_FILE);
	if (chmod(STOPIT_FILE, 0100) == -1)
		err(1, "unable to chmod %s", STOPIT_FILE);

	if (action == REBOOT && open(REBOOT_FILE, O_WRONLY|O_NDELAY|O_TRUNC|O_CREAT, 0644) == -1)
		err(1, "unable to create %s", REBOOT_FILE);

	if (chmod(REBOOT_FILE, action == REBOOT ? 0100 : 0) == -1
	    && (action == REBOOT && errno != ENOENT))
		err(1, "unable to chmod %s", REBOOT_FILE);

	_exit(0);
}
