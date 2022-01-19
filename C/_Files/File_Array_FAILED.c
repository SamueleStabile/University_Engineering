/*• Si assuma di avere un file denominato “mat.dat” di 
10 righe che rappresenti un array di dieci elementi
interi, con ogni elemento memorizzato in una riga. 

• Scrivere un programma che 
– acquisisca l’array dal file e lo stampi a video.
– stampi a video il valore massimo e minimo dell’array, 
restituite dalle funzioni:

• int max(int a[], int dim);
• int min(int a[], int dim);    */


#include <stdio.h>
#define length 50

FILE* ApriFile(char *mod);
void ScriviFile(FILE* sub_fp , int quantity);
int LeggereFile(FILE* sub_fp, int quantity);

int main(){

system("cls");
FILE* fileStream;
int a[length];
int i = 0;
int quantity;
int *array;                 //IMPORTANTISSIMO

fileStream = ApriFile("a+");

printf("Quanti numeri vuoi scrivere nel file? ");
scanf("%d", &quantity);

ScriviFile(fileStream, quantity);


*array = LeggereFile(fileStream, quantity); //IMPORTANTISSIMO

printf(" %d\n", array[0]);
printf(" %d\n", array[1]);
printf(" %d\n", array[2]);
printf(" %d\n", array[3]);
printf(" %d\n", array[4]);
printf(" %d\n", array[5]);

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
        printf("Failed to open\n");
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

int LeggereFile(FILE* sub_fp, int quantity){
    
    int toRead[length];

    for( int i = 0; i < quantity; i++){

        fscanf(sub_fp, "%d\n" , &toRead[i]);
    }

    system("cls");

    printf("----------------Leggendo da FILE: ------------------\n\n");

    for(int j = 0; j < quantity; j++){
        printf("Numero [%d]: %d\n", j+1, toRead[j]);
    }

    system("pause");
    
    return *toRead;
}
