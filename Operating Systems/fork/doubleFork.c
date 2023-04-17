#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>


int main(){

	pid_t pid1;
	pid_t pid2;
	
	pid1 = fork();
	pid2 = fork();
	
	if(pid2 < 0 || pid1<0){
		printf("Errore Fork");
	}
	
	else if(pid2 == 0 || pid1 == 0){
	
		printf("Sono il figlio, PID1 [%d] PID2 [%d] GETPID[%d]\n", pid1,pid2, getpid());
		//execlp("/bin/ls", "ls", "-al",NULL);
		
	}
	else{
		
		printf("I am the parent process PID1 [%d] PID2 [%d] GETPID[%d]\n[Waiting for my child...]\n\n", pid1,pid2, getpid());
		wait(NULL);
		printf("\nCHILD COMPLETE\n");
		exit(0);
	}
	


}
