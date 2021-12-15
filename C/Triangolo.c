
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

int main(int argc, char** argv) {
    printf("\n\n------------------------------------------------------------------------------------ \n"
            "Salve questo e' un programma che calcola area perimentro e diagonale di un triangolo \n"
            "-----------------------------------------------------------------------------------\n");
        sleep(2); //pauso il programma per 2 secondi 
    
    //inizializzo variabili 
    float base, altezza, area, perimetro, diagonale;
    
    
    //chiedo in input i dati base e altezza
    
    printf("Inserisci la base del triangolo: ");
    scanf("%f", &base);
    printf("\n");
    
    printf("Inserisci l'altezza del triangolo: ");
    scanf("%f", &altezza);
    printf("\n");
    
    //eseguo le operazioni matematiche
    area =base*altezza; 
    perimetro =(base + altezza)*2;
    diagonale = sqrt(pow(base,2) + pow(altezza,2));
    
    printf("Area: %f \n", area);
    printf("Perimetro: %f \n", perimetro);
    printf("Diagonale: %f \n", diagonale);
    
    
    
    
    
    
    return (EXIT_SUCCESS);
}

