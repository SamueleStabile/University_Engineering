#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int global_val;

int main(){

global_val = 0;

int *local_val = (int *)malloc(sizeof(int));
*local_val = 1;

pid_t pid = fork();

if(pid < 0){
		printf("Errore\n");
	}
	else if(pid==0){
		
		printf("Figlio PID ritornato: [%d]\n", pid); //pid di ritorno
		printf("Sono il processo figlio PID: [%d], Mio padre PID: [%d]\n\n", getpid(), getppid()); //PID reale del figlio
		
		global_val = 100;
		(*local_val)++;
		
		printf("[IN CHILD] Global_val: [%d] Local_val [%d]\n\n", global_val, *local_val);
		
		exit(0);
		
	}
	else{
	
		wait(NULL); //aspetta che il figlio finisce per terminare il padre
		//sleep(Father); //rimane orfano il figlio
		
		printf("Padre PID ritornato: [%d]\n", pid); //pid di ritorno
		printf("Sono il processo padre: [%d]\n\n", getpid()); //pid reale del padre
		printf("[IN FATHER] Global_val: [%d] Local_val [%d]\n", global_val, *local_val);
		exit(0);
		
	}
	return EXIT_SUCCESS;

}
