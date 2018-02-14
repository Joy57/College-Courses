#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>

int main (void){

	int pid;
	int count;
	int proc;
	pid = getpid();
	
	printf ("start...\n");

	do{
	proc = fork();
	if (proc > 0){
	
	count++;
	printf("forked #: %d\n",count);
	}

	else if (proc <0){
	printf("can't fork");
	exit(0);	
	}
	}while (1);
	return 0;
}
