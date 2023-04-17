#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>


int main(){

	pid_t pid;
	
	pid = fork();
	
	if(pid < 0){
		printf("Errore Fork");
	}
	
	else if(pid == 0){
	
		printf("Sono il figlio, [%d] [%d]\n", pid, getpid());
		printf("Executing directory listing...\n");
		execlp("/bin/ls", "ls", "-al", NULL);
		printf("I am the line after executing directory listing: ls -al \n"); //questa riga di comando non sarà mai eseguita poichè execlp carica in memoria il programma ls, e quindi SOVRASCRIVE lo spazio degli indirizzi del processo!
		
	}
	else{
		
		printf("I am the parent process PID: [%d] [%d]\n[Waiting for my child...]\n\n", pid, getpid());
		wait(NULL);
		printf("\nCHILD COMPLETE\n");
		exit(0);
	}
	


}
