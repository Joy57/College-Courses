#! /bin/csh -f
#set noglob
#cd $1

foreach f (*.jpg)
    set n=`echo $f | cut -d"." -f1`
    echo $f ${n}_tn.jpg
    convert $f -resize 15% $f ${n}_tn.jpg
end
