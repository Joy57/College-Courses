#include <stdio.h>
#include <unistd.h>


int main(void)
{
        FILE *f;
        int pid;
        char buf[128];
 	int n=1;

        printf("child pid=%d\n", (int)getpid());
        printf("parent pid=%d\n", (int)getppid());

	 pid=getppid();

	 while(pid>1)
 	{
         sprintf(buf, "/proc/%d/stat", (int)pid);
         f =fopen(buf, "r");
  	 if(f == NULL) 
	 break;
         fscanf(f, "%*d %*s %*s %d", &pid);
         fclose(f);
         printf("GrandParent%d pid=%d\n", n++, (int)pid);
 }
}
