
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char*argv[]){
	
	int first;
	float second;
	
	printf("\nProgram Name: %s \n", argv[0]);
	printf("Number of arguments: %d \n", argc-1);
	
	if(argc==1){
		printf("No arguments\n");
	}
	else{
	
		if(argc==2){
			
			printf("first arguments by argv: %s \n", argv[1]);
			
			first = atoi(argv[1]);
			second = atof(argv[2]); //vai in segmentation fault se prova ad assorbire un valore che non esiste
			
			printf("first arguments ABSORBED: %d \n:", first);
		}
		
		else if(argc==3){
		
			printf("arguments: %s %s \n", argv[1], argv[2]);
			
			first = atoi(argv[1]);
			second = atof(argv[2]);
			
			printf("arguments ABSORBED: %d %f \n:", first, second);
		
		}
		
		else{
		
			fprintf(stderr, "Wrong Number of arguments!\n");
			return EXIT_FAILURE;
		}
		
	}
	return EXIT_SUCCESS;
}

