#! /bin/bash
#shopt lets you tweak the built in behavior
#-s is an option to affect the built in names
#dotglob contains all the strings that start with a dot
shopt -s dotglob
shopt -s nullglob #If set, Bash allows filename patterns which match no files to expand to a null string, rather than themselves.

#set the positional parameters to the specific pdf file names available in shellSc directory
set -- shellSc/*.PDF

if (( $# > 0 )); 
then
   for file in shellSc/*.PDF; 
do
  mv "$file" "${file%.PDF}.pdf"
  echo "$file has been updated"
done
else
   echo 'There are no .PDF files in your folder'
fi
