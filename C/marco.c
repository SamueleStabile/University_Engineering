#include <stdio.h>
#include <stdlib.h>
#define length 50

FILE* ApriFile(char* mode , char nome_file[length]);

int main(){

FILE* fp;
char t[length];
char nome_file[length];
char ch;
int c = 1;

    system("cls");
    printf("Inserisci il nome del file:");
    scanf("%s",nome_file);

 fp = ApriFile("w", nome_file);

  printf("Inserisci la frase :\n");
    while(getchar()!= '\n'){}

    for(int i = 0 ; (t[i]=getchar())!='\n';i++){} 

    fprintf(fp , t);

    fclose(fp);

    fp = ApriFile("r",nome_file);

 while((fscanf(fp,"%c",&ch))!= EOF){
        c++;
 }
 
    printf("Numero di caratteri nel file : [%d]",c);
    return 0;
 

}

FILE* ApriFile(char* mode, char nome_file[length] ){

    FILE* fptr;

    if((fptr = fopen(nome_file,mode)) == NULL){

        printf("Error");
    }

   return fptr;



}