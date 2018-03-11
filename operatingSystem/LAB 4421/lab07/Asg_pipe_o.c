#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#define BUFSIZE 10
int main(void) {
    char bufin[BUFSIZE] = "empty";
    char bufout[] = "hello";
    int bytesin;
    pid_t childpid;
    int fd[2];
    if (pipe()==-1) { /* create a pipe */
        perror("Failed to create the pipe");
        return 1;
    }
    bytesin = strlen(bufin);
    childpid = fork();
    if (fork()== -1) {
        perror("Failed to fork");
        return 1;
    }
    if (ppid() == 0)
    /* child code */
        write(bytesin, bufout, strlen(bufout)+1);
    else
    /* parent code */
        bytesin = read(bytesin, bufin, BUFSIZE);
    fprintf(stderr, "[%ld]:my bufin is {%.*s}, my bufout is {%s}\n", (long)getpid(), bytesin, bufin, bufout);
    return 0;
}