#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){

	pid_t pid;

	//create the child process
	pid = fork();

	if(pid < 0){
		//error occurred
		fprintf(stderr, "Fork Failed\n");
	}

	else if(pid==0){
		//child process
		fprintf(stdout, "I am the child process: [%d]\n", pid);
		execlp( "bin/ls", "ls", NULL);
	}
	
	else{
		//parent process
		fprintf(stdout, "I am the parent process: [%d]\n",pid);
		//parent process wait for the child to complete
		
		wait(NULL); //blocca il chiamante fino alla terminazione di un figlio
		fprintf(stdout, "Child completed\n");
	}
	printf("Program Completed\n");
	return EXIT_SUCCESS;
	}

