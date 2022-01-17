#include <stdio.h>
#include <string.h>
#define NCAR 100

FILE* ApriFile(char* mode);

int main(){

    FILE* fp;
    char s[1000];

   fp = ApriFile("w");

   scanf("%s", s);

   while(strcmp(s , "$")){
         fprintf(fp, "%s", s);
         scanf("%s", s);
   }
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