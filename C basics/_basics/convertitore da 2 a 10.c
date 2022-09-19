/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Samu
 *
 * Created on 16 November 2021, 12:01
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(void) {
    
    int numero, sommatoria = 0, contatore = 1;
    
    printf("Inserire cifra binaria: ");
    scanf ("%d", &numero);

    while(numero==0 || numero==1){
        
        //conversione
        sommatoria = sommatoria + numero*contatore;
        
        contatore = contatore*2;
        printf("Inserire cifra binaria: ");
        scanf ("%d", &numero);
            
        }
    if(contatore==1)
        printf("Numero non valido");
    else
        printf("Numero convertito: %d", sommatoria);

    
    return (EXIT_SUCCESS);
}

