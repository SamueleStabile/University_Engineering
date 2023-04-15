#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){

	unsigned int Father = 2;
	unsigned int Son = 5;

	pid_t pid = fork();
	
	if(pid < 0){
		printf("Errore\n");
	}
	else if(pid==0){
	
		sleep(Son);
		
		printf("Figlio PID ritornato: [%d]\n", pid); //pid di ritorno
		printf("Sono il processo figlio PID: [%d], Mio padre PID: [%d]\n\n", getpid(), getppid()); //PID reale del figlio
		
		
	}
	else{
		wait(NULL); //aspetta che il figlio finisce per terminare il padre
		//sleep(Father); //rimane orfano il figlio
		
		printf("Padre PID ritornato: [%d]\n", pid); //pid di ritorno
		printf("Sono il processo padre: [%d]\n\n", getpid()); //pid reale del padre
	}
	return EXIT_SUCCESS;

}
