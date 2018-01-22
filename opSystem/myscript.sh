#!/bin/bash
#bash script written by Joy

echo "now starting my shell script..."
#shopt lets you tweak the built in behavior
#-s is an option to affect the built in names
#dotglob contains all the strings that start with a dot
shopt -s dotglob

counter=0  #set counter to 0
tracker=false #tracker has been declared to print out appropriate message

#this loop will iterate through every file in current dir and then rename file
for file in shellSc/*.PDF; #match the files ending in .PDF
do 
  let "counter += 1"
  #mv command 
  mv "$file" "${file%.PDF}.pdf"
  echo "$file has been updated"

if 	[ "$counter" -ge 1 ] #checks whether counter var is greater than or equal to 1
  then	#if above condition is true then it means at least one file has been modified
	tracker=true #hence, set tracker to true
  fi #closes the if statement
done
#when no file has been modified 
if [ "$tracker" = false ] 
  then
  echo "There are no *.PDF files"
  fi
