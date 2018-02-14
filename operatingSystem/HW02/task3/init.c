#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main (int argc, char **argv){
    int pid;
    int parent;
    pid = fork();
    
    if (pid == 0){
        printf("I'm child, pid = %d\t ppid = %d\n", getpid(), getppid());
        printf("child is sleeping\n");
       // sleep(2);
	kill (getppid(), SIGUSR1);
       // printf("child: pid = %d\t ppid = %d\n",getpid(), getppid());
	exit(0);
    }
    else{
        printf("I'm the parent pid = %d\t ppid %d\n",getpid(),getppid());
        printf("parent is waiting\n");
	wait(0);
       // waitpid(pid, NULL, 0); //blocks or stops and waits until the child process terminates
        printf("back to parent %d\n", getpid());
    }
}
