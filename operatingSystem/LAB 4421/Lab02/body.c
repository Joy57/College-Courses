#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <stdlib.h>
int main (int argc, char *argv[]){
    
    int file;   
    char buf[1];
    int m, n;
    //WRITE
    file = open (argv[3], O_CREAT | O_WRONLY, 0600);

    if (file == -1){
        
        perror("Write error");
        exit(1);
    } 
    else{
        printf("file was opened to write\n");
    }

    write (file, "Line number 1\n", 14);
    write (file, "Hello there #2\n", 15);
    write (file, "Hmmm this is #3\n", 16);
    
    
    close(file);
    m = atoi(argv[1]);
    n = atoi(argv[2]);
    int line = 1;
    //READ
    file = open (argv[3],O_RDONLY);

    if (file == -1){
        perror("Read error");
        exit(1);
    } 
    else{
        printf("file was opened to read\n");
    }
    printf("Printing from the line %i to line %i now...\n", m,n);
    
    while (read(file, buf, sizeof(int) != 0))
    {
        if (buf[0] == '\n'){
            line++;
        }
        if((line <= n) && (line >= m)){
        printf("%s", buf);
        }
    }
    printf ("\n");

    close(file);

    return 0;
}