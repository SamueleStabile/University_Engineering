#include <stdio.h>
#include <string.h>
#define NCAR 100

FILE* ApriFile(char* mode);

int main(){

    FILE* fp;
    char s[1000];
    char ch;
    int i = 0;

   fp = ApriFile("w");

   printf("Inserisici Caratteri da scrivere su File (con '$' termini la compilazione) : ");

   while ((s[i] = getchar()) != '$')
   { 
       i++;
   }

   s[i++] = '\0';

   fprintf(fp,"%s", s);

  fclose(fp);
}

//IMPORTANTE-------------------------------------------------------------
FILE* ApriFile(char* mode){

    FILE* fptr;
    char nome_file[NCAR];

    printf("Inserire nome file: ");
    scanf("%s", nome_file);

   if((fptr = fopen(nome_file, mode)) == NULL){
        printf("Errore");
    }
    return fptr;
}