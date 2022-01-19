
#include <stdio.h>
#define max 50

FILE* ApriFile(char* mode);

int main(){

    FILE* streamFile;
    char string[max+1];

    system("cls");

    streamFile = ApriFile("r");

    while(!feof(streamFile)){
    fscanf(streamFile, "%s ", string);
    printf("Parola: %s\n", string);
    }
    return 0;

}

FILE* ApriFile(char* mode){
    
    FILE* file;
    char nomefile[max+1];

    printf("Inserire Nome File: ");
    scanf("%s", nomefile);

    if((file = fopen(nomefile, mode)) == NULL){
        printf("Errore");
    }
    return file;
}