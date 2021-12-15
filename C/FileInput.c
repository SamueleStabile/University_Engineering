#include <stdio.h>

int main(){

    char nomefile[80], parola[80];
    FILE* fp;

    printf("Inserisci il nome del file: ");
    scanf("%s", nomefile);


    printf("Cosa vuoi scrivere nel file? :  ");
    scanf("%s", parola);

    fp = fopen(nomefile , "w");
    
    if(fp == NULL){
        printf("Errore");
    }
    else {
        fprintf(fp, "%s", parola);
    }
    fclose(fp);
}