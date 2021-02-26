#!/bin/bash

CFILES=$(find . -name "*.c" -type f)

for file in $CFILES
do
	if [[ -f "$file" ]];
	then
		gcc -g -O -c $file

		if [[ ! "$?" = "0" ]];
		then
			ERROR=true
		fi
	fi
done

OFILES=$(find . -name "*.c" -type f)

ar rc liball.a $OFILES