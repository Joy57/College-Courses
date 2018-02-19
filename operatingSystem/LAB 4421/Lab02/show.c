#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <stdlib.h>
int main (int argc, char *argv[]){
    
    int file;   
    char buf[0];

   //WRITE
    file = open (argv[1], O_CREAT | O_WRONLY, 0700);

    if (file == -1){
        perror("Write error");
        exit(1);
    } 
    else{
        printf("file was opened to write\n");
    }

    write (file, "Hello world\n", 12);
    
    close(file);

    //READ
    file = open (argv[1],O_RDONLY);
    if (file == -1){
        perror("Read error");
        exit(1);
    } 
    else{
        printf("file was opened read\n");
    }
    while (read(file, buf, sizeof(int) != 0))
    {
        printf("%s", buf);
    }
   
    close(file);


    return 0;
}