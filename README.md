# notlinux

Experimental Linux distribution, using plan9s `mk` to build system components
and third-party software (`src/ports`).

## Development

### mkcmd

`src/mkcmd` builds one binary, can be included multiple times.

```
TARG=foo     # binary name
LIBS=\       # shared/static libraries, helper files set {C,CPP,LD}FLAGS_$name
	libfoo\
	libbar\  # includes helper file $root/$objtype/lib/lib{foo,bar}.mk

OFILES=\     # object files
	foo.$O\
	bar.$O\

<$root/src/mkcmd
```

### mkcommon

`src/mkcommon` generic rules to compile, link, install and clean.

### mkconf

The default compiler, linker and path configuration is located in `src/mkconf`.

### mkdir

`src/mkdir` generates rules and default targets from the `DIRS` variable.

##### Example

```
DIRS=\
	foo\
	bar\

<$root/src/mkdirs
```

### mklib

`src/mklib` is used to link static lib libraries.

##### Example

```
LIB=libfoo  # binary name
OFILES=\    # object files
	foo.$O\
	bar.$O\

<$root/src/mklib
```

### mkport

`src/mkport` downloads, extracts, configures, builds and installs third-party
software.

##### Example

```
pkg=foo # upstream name
var=1.0 # upstream version

# download and extract archive.
url=https://foo.com/bar-$ver.tar.gz

# clone repository and checkout $git_rev.
git=git://foo.com/bar
git_rev=v$ver

# checkout repository at $cvs_rev, $cvs_mod for specific paths.
cvs=anoncvs@foo.com:/cvs
cvs_rev=branchanme_0
cvs_mod=src/foo/bar

<$root/src/mkport
```

##### Directory structure

```
├─ files   # All files are compied into the src/$wrk directory
├─ mkfile  # The mkfile that include `$root/src/mkport`
└─ src     # checked out from cvs/git or extracted from downloaded archive.
   └─ $wrk # `$pkg-$ver` by default, can be overwritten after the include line.
```
