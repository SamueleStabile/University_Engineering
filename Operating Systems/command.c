#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, char*argv[]){

	int i = 0;
	int j = 0;
	
	printf("\nProgram Name: %s \n", argv[0]);
	printf("Number of arguments: %d \n", argc-1);
	printf("\nCommand Name: [%s] \n", argv[1]);
	
	char command[20];
	strcpy(command, argv[1]);
	char add[20] = "/bin/";
	
	printf("stringa [%s]\n", add);
	
	printf("Comando concatenato: [%s]\n\n", strcat(add,command));
	
	
	
	pid_t pid = fork();
	
	if(pid<0){
		printf("Errore Fork");
	}
	
	else if( pid == 0){
	
		printf("Sono il figlio, PID [%d]  GETPID[%d]\n", pid,getpid());
		execlp(strcat(add,command),command, NULL);
		
	}
	else{
		
		printf("I am the parent process PID [%d] GETPID[%d]\n[Waiting for my child...]\n\n", pid,getpid());
		wait(NULL);
		printf("\n-----COMANDO ESEGUITO!------\n");
		exit(0);
	}
	


}
