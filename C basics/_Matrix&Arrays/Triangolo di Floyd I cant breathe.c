/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Samu
 *
 * Created on 16 November 2021, 20:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int righe, i, counter=1, r;
    
    printf("Inserisci il numero di Righe del Triangolo di Floyd: ");
    scanf("%d", &righe);
    

    for(i=1; i<=righe; i++){
        
        for(r=0; r<i; r++){
            
            printf("%d", counter);
            counter++;
            
        }
        printf("\n"); 
    }
    
    return (EXIT_SUCCESS);
}
