#!/bin/sh
cat /etc/passwd | cut -d ':' -f 1 | sed '1~2d' | rev | sort -r | sed -n "$FT_LI\
NE1,$FT_LINE2"p | sed -z 's/\n/, /g;s/, $/\n/' | sed -z 's/\n/./'
