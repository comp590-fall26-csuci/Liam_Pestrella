#!/bin/bash


password_file="passwords.txt"
output_directory="password_files"


if [[ ! -f "$password_file" ]]; then
   echo "Error: $password_file was not found."
   exit 1
fi


mkdir -p "$output_directory"


echo "Passwords in alphabetical order:"
sort "$password_file"


count=1


while IFS= read -r password || [[ -n "$password" ]]; do
   printf '%s\n' "$password" > "$output_directory/password${count}.txt"
   ((count++))
done < "$password_file"


echo
echo "Created $((count - 1)) files in $output_directory."
