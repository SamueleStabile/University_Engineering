#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>


int main(int argc, char*argv[]){

	pid_t pid;
	
	char parola[100];
	int *local_val = (int *)malloc(sizeof(int));
	*local_val = 1;
	
	//strcpy(parola, argv[1]);
	//int len = strlen(parola);
	
	//printf("Stringa: [%s] \nLunghezza: [%d]\nValori in riga di comando:[%d]\n\n", parola,len, argc);
	
	for(int i=1; i < argc; i++){
		pid = fork();
		
	}
	
	if(pid < 0){
		printf("Errore Fork");
	}
	
	else if(pid == 0){
	
		strcpy(parola, argv[*local_val]);
		
		srand(getpid());
		int tmp = rand()%10;
		printf("ATTESA [%d] secondi\n", tmp);
		sleep(tmp);
	
		printf("PID: [%d] GetPid: [%d] | Messaggio: [%s]\n\n", pid, getpid(), parola);
		
		
	}
	else{
		
		printf("I am the parent process PID: [%d] [%d]\n[Waiting for my child...]\n\n", pid, getpid());
		(*local_val)++;
		wait(NULL);
		printf("\nCHILD COMPLETE\n");
		exit(0);
	}
	


}
