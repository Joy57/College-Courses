#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char **argv){

    clock_t startT;
    clock_t finishT;

    float total = 0;
    float s;
    int pid;
    for (int i = 0; i< 3; i++){
        startT = clock(); //clock returns the amount of time spent inside the prog
        pid = fork();

        if (pid > 0){
            printf("process..\n");
            sleep(1);
        }
        else if (pid < 0){
            printf("Can't fork\n");
        }
        else{
            exit(1);
        }
        finishT = clock();
        s = (((finishT-startT)*1.0)/CLOCKS_PER_SEC);
        total = total + s;
    }
    total = total/5;
    
    printf ("CPU time used by fork %f\n", total);
    return 0;



}
