#include <stdio.h>

int main(){

    char nomefile[80], parola[80];

    FILE* fp; //crei un flusso di dati, chiamato stream di nome, in questo caso "fp"

    printf("Inserisci il nome del file: ");
    scanf("%s", nomefile);

    printf("Cosa vuoi scrivere nel file? :  ");
    scanf("%s", parola);

    fp = fopen(nomefile , "w"); //per creare il file esistono diversi metodi
    
    if(fp == NULL){
        printf("Errore");
    }
    else {
        fprintf(fp, "%s", parola);
    }
    fclose(fp);
}