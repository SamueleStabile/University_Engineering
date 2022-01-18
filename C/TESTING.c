#include <stdio.h>
#include <string.h>
#define LENGTH 100

FILE* ApriFile(char* mode);

int main(){

FILE* fp;
char writing[LENGTH]; 

system("cls");

fp = ApriFIle("w");

    printf("Cosa vuoi scrivere sul file?");
    scanf("%s", writing);

    fprintf(fp , writing);

fclose(fp);
}

FILE* ApriFile(char* mode){

    FILE* fp_temp;
    char nome_file[LENGTH];

    printf("Nome File: ");
    scanf("%s", nome_file);
    
    if ((fp_temp = fopen(nome_file, mode)) == NULL){
        printf("Failed to open");
        }
    return fp_temp; 
}



