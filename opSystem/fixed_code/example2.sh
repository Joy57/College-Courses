#! /bin/csh -f
#cd $1 in the ls command was invalid in this context. commenting out this removes the subshell issue for this script. 

foreach f (*.jpg)
    set n=`echo $f | cut -d"." -f1`
    echo $f ${n}_tn.jpg
    convert $f -resize 15% $f ${n}_tn.jpg 
#The convert command takes an image, performs actions on it, and saves the image with the file name you specify. One of the most basic things you can do with it is converting images between formats. 

end
