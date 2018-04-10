cat /etc/passwd | grep -v '^#' | sed -n "n;p" | cut -d : -f1 | sed 's/$/ /' |  rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed "s/.$/./" | cut -c2- | tr -d "\n"
