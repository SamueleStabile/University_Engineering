/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Samu
 *
 * Created on 22 November 2021, 18:11
 */

#include <stdio.h>
#include <stdlib.h>
#define maxrows 20
#define maxcolumns 2

/*
 * 
 */
int main(int argc, char** argv) {

    //dichiarazioni variabili globali
int matrix[maxrows][maxcolumns];
int voti;

printf("\n Quanti voti vuoi inserire? ");
scanf("%d", &voti);

while( voti<0 || voti>20){
    printf("\n Numero non valido!\n Qaunti voti vuoi inserire? ");
    scanf("%d", &voti);
}
     



     //ciclo di riempimento della matrice:
    for(int i=0; i<=maxrows; i++){
        //leggo la righe di indice i
        for(int j=0; j<=maxcolumns; j++){
            printf("Inserisci Voto Esame [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        
    }
    






    return (EXIT_SUCCESS);
}

