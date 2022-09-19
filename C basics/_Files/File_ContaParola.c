#include <stdio.h>

int main(){

    FILE* fp;
    char c;
    int cont = 0;
    
    fp = fopen("dati.txt" , "r");
    
    if(fp == NULL){
        printf("Errore");
    }
    else {
	    while(fscanf(fp,"%c", &c) != EOF) {
		    cont++;
    }
        
	    printf("\n Il numero di caratteri e': %d ", cont);
        fclose(fp);
    }
}