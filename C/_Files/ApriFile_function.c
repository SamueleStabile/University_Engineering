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
    scanf("%s", nome_file);

    if( (fptr = fopen( nome_file,mode)) == NULL ){
        printf("Error");
    }

    return fptr;

}

FILE* ApriFile2(char* mod){     //ALTERNATIVA CON getchar()
    
    FILE* sub_fp;
    char nomefile[LENGTH+1];
    int i = 0;

    printf("Nome FILE: ");

    for( i = 0; ((nomefile[i] = getchar()) != '\n'); i++);
    
    nomefile[i++] = '\0'; //IMPORTANTE

    if( (sub_fp = fopen(nomefile, mod)) == NULL ) {
        printf("Failed to open");
        return 0;
    }
    return sub_fp;
}