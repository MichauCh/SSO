#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void main(void){
 int pid,status,i;
 if((pid = fork()) == 0) { /* Proces potomny ---*/
    printf("Komunikat z procesu potomnego\n");
    sleep(15);
    exit(0);
 }

 /* Proces macierzysty */
 printf("Macierzysty = %d \n",getpid());
 pid = wait(&status);
 printf("Proces %d zakończony status: %d\n",pid,status);
} 
