cat /etc/passwd | grep -v "#" | awk '(NR%2!=1)' | cut -f 1 -d : | rev | sort -r | sed -n "7,15 p" | tr '\n' ',' | sed 's:,:, :g' | sed 's:, $:.:' | tr -d '\n'
