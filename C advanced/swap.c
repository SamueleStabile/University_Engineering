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

//Samuele Stabile 20 settembre 2022

#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y, int n){
    //creo la variabile di appoggio temp
  int temp;
  for(int i = 0; i < n; i++){
    temp = *x;
    *x = *y;
    *y = temp;
    x++;
    y++;
  }
}
int main(int argc, char** argv) {
    system("clear");
    printf("\n-- Samuele Stabile 19 Settembre 2022 --\n\n");

    int a=3, b=5;
    int av[10]= {1,2,3,4,5,6,7,8,9,10}, bv[10]={11,12,13,14,15,16,17,18,19,20};
    int *ap = &a, *bp = &b;

    swap(&a,&b, 1);
        printf("A=[%d] B=[%d]\n",a ,b);

    swap(av,bv,10);
        printf("\n\nA = ");
        for(int i = 0; i < 10; i++)
            printf("[%d]",av[i]);
        
        printf("\n\nB = ");
        for(int i = 0; i < 10; i++)
            printf("[%d]",bv[i]);
    
    swap(ap,bp,1);
       printf("\n\nAp=[%d] Bp=[%d]\n",a ,b);



}
 