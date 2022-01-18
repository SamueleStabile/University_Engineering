#include <stdio.h>
#include <string.h>
#define NCAR 100

FILE* ApriFile(char* mode, char nome_file[NCAR]);

int main(){

    FILE* fp;
    char writing[NCAR];
    char nome_file[NCAR];
    char ch;
    int cont = 0;
    int i = 0;

    system("cls");

    printf("Inserire nome file: ");
    scanf("%s", nome_file);

   fp = ApriFile("w", nome_file);

        printf("Cosa vuoi scrivere sul file: ");

        while(getchar() != '\n'){}

        while( (ch = getchar()) != '\n'){
            writing[i] = ch;
            i++;
          }

        writing[i++] = '\0';

        fprintf(fp , writing);

  fclose(fp);

    fp = ApriFile("r", nome_file);

    while((ch = fgetc(fp)) != EOF){
        if( ch != ' ' && ch != '\n'){
        cont++;
        }

    }

    printf("\nNumero di caratteri nel file: %d", cont);


}

//IMPORTANTE-------------------------------------------------------------
FILE* ApriFile(char* mode, char nome_file[NCAR]){

    FILE* fp_tempo;

   if((fp_tempo = fopen(nome_file, mode)) == NULL){
        printf("Errore");
    }
    
    return fp_tempo;
}
