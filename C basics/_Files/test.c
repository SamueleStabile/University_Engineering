#include <stdio.h>
#define length 50

FILE* ApriFile(char *mod);
void ScriviFile(FILE* sub_fp , int quantity);

int main(){

system("cls");
FILE* fileStream;
FILE* test;
int quantity;
int num;

fileStream = ApriFile("w+");

printf("Quanti numeri vuoi scrivere nel file? ");
scanf("%d", &quantity);

ScriviFile(fileStream, quantity);

test = fileStream;
//---------------------------------------------
    fscanf(test, "%d", &num); 

    printf("%d", num);

//-----------------------------------------------------    
fclose(fileStream);

}


FILE* ApriFile(char* mod){
    
    FILE* sub_fp;
    char nomefile[length+1];
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

void ScriviFile(FILE* sub_fp , int quantity){

    int toWrite[length];
    int i = 0;

   for( int i = 0; i < quantity; i++){

        printf("Numero [%d]: ", i+1);
        scanf("%d", &toWrite[i]);
        fprintf(sub_fp ,"%d\n", toWrite[i]);

   }
}
