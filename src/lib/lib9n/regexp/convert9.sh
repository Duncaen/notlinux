#!/bin/sh

sed -i \
	-e 's/regcomp(/regcomp9(/g' \
	-e 's/regcomplit(/regcomplit9(/g' \
	-e 's/regcompnl(/regcompnl9(/g' \
	-e 's/regerror(/regerror9(/g' \
	-e 's/regexec(/regexec9(/g' \
	-e 's/regsub(/regsub9(/g' \
	-e 's/rregexec(/rregexec9(/g' \
	-e 's/rregsub(/rregsub9(/g' \
	$@
