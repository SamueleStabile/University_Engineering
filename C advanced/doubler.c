/*
 * Scrivere una funzione
 * int *doubler(int *z, int n)
 * 
 * che riceve come argomenti
 * - un puntatore a intero z
 * - un intero n
 * e modifica il contenuto di n interi raddoppiandone il valore;
 * gli n interi sono consecutivi come in un vettore ed il primo intero
 * si trova proprio all'indirizzo a cui punta z
 * la funzione restituisce un puntatore all'ultimo intero modificato
 */
//Samuele Stabile 19 Settembre 2022 

#include <stdio.h>
#include <stdlib.h>

int *doubler(int *z, int n);
 
int main(int argc, char** argv) {
    
    system("cls");
    printf("\n-- Samuele Stabile 19 Settembre 2022 --\n\n");
    int v[10]={1,2,3,4,5,6,7,8,9,10}; //vettore con elementi consecutivi
    int m, i; 
    int *p = NULL; //inizializziamo il puntatore vuoto anche se non necessario
    
    do {
        printf("Inserisci il numero dei valori da raddoppiare (0 a 10): ");
        scanf("%d", &m);
    } while(m > 10 || m < 0);
    
    printf("\nVettore Originale: [ "); //stampo vettore originale
    for(i=0;i<10;i++)
        printf("%d ",v[i]);

    printf("]\n");
    
    p = doubler(v, m); // richiamo la funzione doubler passando il vettore e gli n elementi da raddoppiare
    
   
    printf("Vettore Doubled: [ ");
    for(i=0;i<10;i++)
        printf("%d ",v[i]);
    
    printf("]\n");

    
    printf("\n\nIndirizzo 1st Elemento:[%p]",&v);
    
    printf("\nIndirizzo ultimo elemento modificato: [%p]\n\n",p);
    
    return (EXIT_SUCCESS);
}

int *doubler(int *z, int n) { // uso *z perchè altrimenti non potrei passare un vettore ad una funzione
    int i;
    
    for(i=0;i<n;i++)
        z[i]=z[i]*2; //raddoppio l'elemento corrente
    
    return &z[i]; //ritorno l'indirizzo di z[i] che in quel momento sarà puntato all'ultimo elemento convertito
}