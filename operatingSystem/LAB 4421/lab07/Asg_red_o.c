#include<errno.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(void) {
    pid_t childpid;
    int fd[2];
    int r;
    r = pipe(fd);
    if (r == -1) { /* setup a pipe */
        perror("Failed to setup pipeline");
        return 1;
    }
    int pid = fork();
    if (pid == -1) { /* fork a child */
        perror("Failed to fork a child");
        return 1;
    }
    if (pid == 0) {/* env is the child */
        
        if (---------)
            perror("Failed to redirect stdout of env");
        else if (---------) /* close unused file descriptor */
            perror("Failed to close extra pipe descriptors on env");
        else {
            execl(---------); /* execute env */
            perror("Failed to exec env");
        }
        return 1;
    }
    if (----------)
    /* grep is the parent */
        perror("Failed to redirect stdin of grep");
    else if (---------)
        perror("Failed to close extra pipe file descriptors on grep");
    else {
        execl(---------); /*execute "grep HOME"*/
        perror("Failed to exec grep");
    }
    return 1;
}
