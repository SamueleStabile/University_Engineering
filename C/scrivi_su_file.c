#include <stdio.h>
#include <string.h>
#define NCAR 100

FILE* ApriFile(char* mode);

int main(){

    FILE* fp;
    char writing[NCAR];

    system("cls");

   fp = ApriFile("w");

        printf("Cosa vuoi scrivere sul file?");
        scanf("%s", writing);

        fprintf(fp , writing);

  fclose(fp);
}

//IMPORTANTE-------------------------------------------------------------
FILE* ApriFile(char* mode){

    FILE* fp_tempo;
    char nome_file[NCAR];

    printf("Inserire nome file: ");
    scanf("%s", nome_file);

   if((fp_tempo = fopen(nome_file, mode)) == NULL){
        printf("Errore");
    }
    return fp_tempo;
}

