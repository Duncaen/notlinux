<$root/src/mkconf

all:V: init

init:Q: init.in
	sed \
		"s/%%OBJTYPE%%/$objtype/g" \
		$prereq >$target

DIRS=\
	src\

<$root/src/mkdir
