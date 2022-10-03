//Samuele Stabile 2 Ottobre 2022
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#define LEN 50

int Palindroma(char *parola, int n);

int main(int argc, char **argv){


    //char parola[LEN+1];
    //strcpy(parola, argv[1]);
    //int n = strlen(parola);

    //UNCOMMENTA per prendere l'output dal programma e non dall'argv[]
    char parola[] = "osso";
    int n = sizeof(parola) - 1; // sizof(parola) sará ugale a 5 perché anna + /0 carattere terminatore
    //il contatore della parola andrá da 0 a 3
    printf("\nstring debug: [%s]\n", parola);
    printf("N debug: [%d]\n", n);
    printf("\nDimension of [%s] is [%d]\n", parola, n);

    if(Palindroma(parola, n)){ //se Palindroma() restituisce 1 | n-1 per togliere il carattere terminatore /0
        printf("La Stringa [%s] e' palindroma\n", parola);
    }else{                      //se Palidnroma() restituisce 0
        printf("Non Palindroma");
    }
}

int Palindroma(char *parola, int n){
    if(n==1 || n==0){ //caso base
        return 1;
    }
    if(parola[0] != parola[n-1]){
        //La stringa non é Palindroma
        return 0;
    }
    return Palindroma(parola+1,n-2); //escludo i due caratteri confrontati e punto il nuovo primo di parola
}
