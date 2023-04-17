#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>


int main(){

	pid_t pid;
	pid_t pid2;
	
	pid = fork();
	
	if(pid < 0){
		printf("Errore Fork");
	}
	
	else if(pid == 0){
	
		printf("Sono il figlio, [%d] [%d]\nCreo un altro figlio\n", pid, getpid());
		
		pid2 = fork();
		
			if(pid2 < 0){
				printf("Errore Fork");
			}
			
			else if(pid2 == 0){
				printf("--Secondo Figlio RPID [%d] PID [%d] FATHER [%d]\n",pid2, getpid(), getppid());
				
			}
			else{
				wait(NULL);
				printf("--Primo Figlio, [padre del secondo figlio] RPID [%d] PID [%d] FATHER [%d]\n", pid2, getpid(), getppid());
			}
		
	}
	else{
		
		printf("I am the parent process PID: [%d] [%d]\n[Waiting for my child...]\n\n", pid, getpid());
		wait(NULL);
		printf("\nCHILD COMPLETE\n");
		exit(0);
	}
	


}
