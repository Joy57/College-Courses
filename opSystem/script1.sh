#! /bin/bash

shopt -s nullglob #make sure that 

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
