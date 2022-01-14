#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#define max 1000
    
int menu();
int matrice();
void presentazione();
int riempi_matrice(int rows, int cols);




void presentazione(){
    system("clear");
    printf("----- Gestione di Matrice ----\n");
    sleep(1);
    printf("----- by Samuele Stabile -----\n");
    sleep(1);
    system("cls");


}

int riempi_matrice(int rows, int cols){

    int matrix_sub[max][max];

    for (int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Casella [%d][%d] = ");
            scanf("%d", matrix_sub[i][j]);
            system("clear");
        }
    }
}
int menu(){
    int scelta;
    system("cls");
    printf("----------------MENU-----------------\n");
    printf("[1] Visualizza Matrice \n");
    printf("[2] Ri-riempi la matrice \n");
    printf("[3] Visualizzare diagonale principale \n");
    printf("[4] Visualizzare diagonale opposta \n");
    printf("[5] Visualizzare la matrice trasposta \n");
    printf("[6] Somma degli elementi della matrice \n");
    printf("[7] Somma colonna a scelta \n");
    printf("[8] Somma righe a scelta \n");
    printf("[9] Termina Programma \n\n");

    printf("Inserisci Operazione: ");
    scanf("%d", &scelta);

    return(scelta);

}

int main(){
    int rows, cols; 
    int matrix[max][max];

    presentazione();
    
    printf("-- Inserisici le dimensioni della Matrice --");
    sleep(2);
    system("cls");
    printf(" Righe matrice: ");
    scanf("%d", &rows);
    printf(" Colonne matrice: ");
    scanf("%d", &cols);
    
    riempi_matrice(rows, cols);

    switch(menu()){
        case 1: 
        printf("ciao");
        break;


    }
}
