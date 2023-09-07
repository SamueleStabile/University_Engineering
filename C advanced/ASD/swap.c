/*
 * Progettare una funzione di swap che quando viene
 * chiamata con swap(A,B) lo scopo é trasferire il contenuto
 * dell'area di memoria a cui si riferisca A; in altre parole chi chiama
 * la funzione swap ha due variabili A e B e si vuole che dopo la chiamata a swap
 * alla variabile A siano associati i contanuti che eranno associati a B,
 * mentre alla variabile B siano associati i contanuti che erano assocciati ad A
 *
 * Il fatto che per A e B non siano stati specificati dei tipi é intenzionale, provare con valori di partenza:
 * - int A, int B; (in questo la chiamata swap é fatto in modo tale che le due variabili si invertino i valori)
 * - int A[10], int B[10]; (in questo caso il contenuto del secondo array viene riversato nel primo e viceversa,in questo
 * caso swap funziona in sequenze di 10 interi)
 * - int *A, int *B; (in questo caso si vuole che l'intero a cui punta B sia assegnato all'area di memoria a cui punta A e viceversa)
 */

// Samuele Stabile 9 settembre 2023

#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y, int z)
{

    int temp;
    for(int i = 0; i < z; i++){
    temp = *x;
    *x = *y;
    *y = temp;
    x++;
    y++;
    }

}
int main(int argc, char **argv)
{
    system("clear");
    printf("\n-- Samuele Stabile 19 Settembre 2022 --\n\n");

    int a = 4, b = 20;
    int av[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, bv[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 69};
    int *ap = &a, *bp = &b;

    system("cls");
    printf("a = [%d]\n", a);
    printf("b = [%d]\n", b);

    printf("\nav = ");
    for(int i = 0; i < 10; i++){
        printf("[%d]", av[i]);
    }

     printf("\nbv = ");
    for(int i = 0; i < 10; i++){
        printf("[%d]", bv[i]);
    }

    printf("\n\n[AFTER SWAP]\n");

    swap(&a,&b,1);
    swap(av,bv,10);

    printf("a = [%d]\n", a);
    printf("b = [%d]\n", b);

       printf("\nav = ");
    for(int i = 0; i < 10; i++){
        printf("[%d]", av[i]);
    }

     printf("\nbv = ");
    for(int i = 0; i < 10; i++){
        printf("[%d]", bv[i]);
    }

    printf("\nap = [%d]", *ap); 
    printf("\nbp = [%d]", *bp); 


}