#include <stdio.h>

int main(){
    int matrix[10][10][10];
    int dimensione_matrice;

    printf("Inserisci dimensione matrice cubica --> ");
    scanf("%d", &dimensione_matrice);

    //ciclo di riempimento matrice-------------------
    for (int i = 0; i < dimensione_matrice; i++){
        for (int j = 0; j < dimensione_matrice; j++){
            for (int k = 0; k < dimensione_matrice; k++){
                printf("elemento[%d][%d][%d]: ", i, j, k );
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }
    //----------------------------------------------
    printf("\n\n-----MATRICE CUBICA VISUALIZZATA-----\n\n");
    //ciclo di stampa matrice-----------------------
    for (int i = 0; i < dimensione_matrice; i++){
        printf("------Griglia [%d]-----\n",i);
        for (int j = 0; j < dimensione_matrice; j++){
            for (int k = 0; k < dimensione_matrice; k++){
                printf("[%d]", matrix[i][j][k]);
            }
            printf("\n");
        }
    }
    //-----------------------------------------------
}