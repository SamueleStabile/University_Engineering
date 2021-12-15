/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Samu
 *
 * Created on 22 November 2021, 17:37
 */

#include <stdio.h>
#include <stdlib.h>
#define maxrows 20
#define maxcolumns 20

/*
 * 
 */
int main(void) {

    int matrix[maxrows][maxcolumns];
    int rows, columns;
   
    printf("\n Numero di Righe: ");
    scanf("%d", &rows);
     
  
    printf("\n Numero di Colonne: ");
    scanf("%d", &columns);
    
    
    //ciclo di riempimento della matrice:
    
    for(int i=0; i<=rows; i++){
        //leggo la righe di indice i
        for(int j=0; j<=columns; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        
    }
    
    //-------------ciclo di lettura della matrice------------------
    printf("-----Matrice Stampata-----\n");
    
    //identazione contatore colonne 
    printf("   ");
    
    //identazione contatore colonne
    for(int j=0; j<=columns; j++){
            printf(" %d  ", j);
        }
    
    //stampo la matrice
    for(int i=0; i<=rows; i++){
     //identazione contatore righe
        printf("\n %d ", i);
    
        for(int j=0; j<=columns; j++){
            printf("[%d] ", matrix[i][j]);
        }
    }
    
    
    return (0);
}

