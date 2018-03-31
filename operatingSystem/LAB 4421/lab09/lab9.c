#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void killChild(int sig)
{
	pid_t child_pid = getpid(); 
    kill(child_pid,SIGKILL);
}

int main()
{
	int child;
	
	int secs;
	int i = 0;
    signal(SIGALRM,(void (*)(int))killChild);
	int p;
	printf("Input secods: ");
	scanf("%d", &secs);	
	
	pid_t pid = fork();

	if(pid < 0) // Failed to fork
	{
		perror("error occured cannot create");
		exit(0);
	}
	else if (pid == 0) // child process
	{		
		alarm(secs);
		p = getpid();
		while(1)
		{
			printf("Hello %d\n", i);
			++i;
			sleep(1);
			
		}
	}
	else		// parent process here
	{
        wait(NULL);
		printf("Parent process\n");
	}

}