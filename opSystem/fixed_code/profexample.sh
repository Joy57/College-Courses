#! /bin/csh -f

cd $1

foreach f (*.jpg)
    set n=`echo $f | cut -d"." -f1`
    echo $f ${n}_tn.jpg
    convert -resize 15% $f Thumb/${n}_tn.jpg
end

