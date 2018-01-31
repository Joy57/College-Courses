#! /bin/csh
echo "now starting my shell script..."

foreach x (*.pdf)
  echo $x
  mv $x ${x:r}.PDF
  echo "has been updated"
end
#EOF
 
