CC=x86_64-linux-musl-gcc
LD=x86_64-linux-musl-gcc
AS=x86_64-linux-musl-as
AR=x86_64-linux-musl-gcc-ar
RANLIB=x86_64-linux-musl-gcc-ranlib

CFLAGS=\
	-g -O2\
	-fstack-protector-strong\
	-flto\
	-Wformat -Wformat-security -Wpedantic\

CPPFLAGS=\
	-D_FORTIFY_SOURCE=2\

LDFLAGS=\
	-g\
	-static -flto\
	-Wl,--as-needed -Wl,-z,relro -Wl,-z,now\
