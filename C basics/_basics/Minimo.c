/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Samu
 *
 * Created on 16 November 2021, 11:08
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float numero, minimo;
    
    
    printf("Inserisci Numero:");
    scanf("%f", &numero);
    
    minimo = numero;  //primo numero inserito é il primo minimo
    
    
    while (numero>=0){
        //confronto i valori tra il vecchio minimo ed il nuovo numero
        if(numero<minimo){    
            minimo = numero; 
        }
        //leggo i valori
        printf("Inserisci Numero: ");
        scanf("%f", &numero);
     
    }
    if(minimo>=0)
        printf("\nMinimo: %f", minimo);
    else
        printf("\nNessun numero valido in input! \n");
    
    system("PAUSE"); //press any key to continue... =)
     
    return (EXIT_SUCCESS);
}
