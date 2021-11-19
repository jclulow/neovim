#ifndef	NVIM_OS_ILLUMOS_H
#define	NVIM_OS_ILLUMOS_H

#include <sys/termios.h>

int openpty(int *, int *, char *, const struct termios *,
    const struct winsize *);
int login_tty(int);
int forkpty(int *, char *, const struct termios *, const struct winsize *);
int cfsetspeed(struct termios *, speed_t);

#endif
