#! /bin/csh
echo "now starting my shell script..."

foreach x (*.pdf)
  echo $x
  mv $x ${x:r}.PDF
 # echo "$x has been updated"
end
#EOF
 
