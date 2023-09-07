//Samuele Stabile 9 Settembre 2023

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    
    struct persona {
        char cognome[10];
        char nome[10];
        int anni;
    };  

    struct persona x, y={"Stabile","Samuele",20}, z;
    y.anni=33;
    z=x;


    struct persona w[10];
    struct persona *t = &y;
    printf("\n[NOME PERSONA Y] = %s", y.nome);
    printf("\n[COGNOME PERSONA Y] = %s", y.cognome);
    printf("\n-------[ANNI PERSONA Y]---------\n");

    printf("[y.anni]= %d\n[t->anni]= %d\n[(*t).anni]= %d", y.anni, t->anni, (*t).anni);
    printf("\n---------------------------------\n");

    typedef struct persona dude; //definizione simile persona = dude
    
    dude g = {"Novissimo", "Marco", 19} ;
    printf("\n[NOME PERSONA Y] = %s", g.nome);
    printf("\n[COGNOME PERSONA Y] = %s", g.cognome);
    printf("\n-------[ANNI PERSONA Y]---------\n");

    printf("[g.anni]= %d\n", g.anni);
    printf("\n---------------------------------\n");


    
    typedef int intero; //definizione simile int = intero
    intero j = 1;
    printf("[typedef int intero j = 1] = %d", j);


}