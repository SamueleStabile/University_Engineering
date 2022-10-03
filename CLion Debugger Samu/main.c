//Samuele Stabile 2 Ottobre 2022
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#define LEN 50
int i = 0;

int Palindroma(char *parola, int n);

int main(int argc, char **argv){


    char parola[LEN+1];
    strcpy(parola, argv[1]);
    int n = strlen(parola);

    printf("string debug: [%s]", parola);

    //UNCOMMENTA per prendere l'output dal programma e non dall'argv[]
    //char parola[] = "osso";
    //int n = sizeof(parola) - 2; // sizof(parola) sará ugale a 5 perché anna + /0 carattere terminatore
    //il contatore della parola andrá da 0 a 3

    printf("\n\nDimension of [%s] is [%d]\n", parola, n);

    if(Palindroma(parola, n-1)){ //se Palindroma() restituisce 1 | n-1 per togliere il carattere terminatore /0
        printf("La Stringa [%s] e' palindroma\n", parola);
    }else{                      //se Palidnroma() restituisce 0
        printf("Non Palindroma");
    }
}

int Palindroma(char *parola, int n){

    if(parola[i] != parola[n]){
        //La stringa non é Palindroma
        return 0;
    }
    if(n==i){ //caso base
        //La String é Palindroma
        return 1;
    }
    i++;
    Palindroma(parola,n-1);
}
