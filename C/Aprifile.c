#include <stdio.h>
#define LENGTH 50

FILE* ApriFile(char* mode);

int main(){

FILE* fp;

fp = ApriFile("w");


}

FILE* ApriFile(char* mode){

    FILE* fptr;

    char nome_file[LENGTH];

    printf("Inserisci nome file: ");
    scanf("%s", &nome_file);

    if( (fptr = fopen( nome_file,mode)) == NULL ){
        printf("Error");
    }

    return fptr;

}