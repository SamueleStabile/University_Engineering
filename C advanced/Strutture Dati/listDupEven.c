/*Samuele Stabile 30 Ottobre 2022
*
*
Implementare la funzione (sia iterativa che ricorsiva) listDupEven
che, data una lista ordinata di interi, duplica tutti i valori pari.
TList listDupEven (TList list)
Esempi di esecuzione:
input list = 10 11 11 18 18 21 30
output list = 10 10 11 11 18 18 18 18 21 30 30
input list = 11 13 15
output list = 11 13 15
input list = 10 10 10
output list = 10 10 10 10 10 10
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "TList.h"
#include "TInfo.h"
#include <stdbool.h>

bool list_is_empty(TList L){
    return L==NULL ;
}

//Versione ITERATIVA
TList listDupEven(TList list){
    TList ret = listCreate();
    while(!(list == NULL)){
        
        ret = listInsert(ret, list->info);

        if(list->info%2==0){
            ret = listInsert(ret, list->info);
        }
        //printf("\n");
        //listPrint(ret);
        list = list->link;
    }
    return ret;
}

//VERSIONE RICORSIVA
TList listDupEvenRecursive(TList list){

    TList ret = listCreate();

    if(list == NULL){
        return 0;
    }

    ret = listDupEvenRecursive(list->link); //richiamo la funzione puntando all'elemento successivo

    ret = listInsert(ret, list->info); //inserisco l'elemento normale
    if(list->info%2==0){
        ret = listInsert(ret, list->info); //se pari duplico l'elemento e lo inserisco di nuovo
    }

    return ret; //ritorno la lista aggiornata
}

int main(int argc, char **argv){

    TList list = listCreate(); //creo la lista de

    for( int i = 0; i<20; i++){ //riempio la lista in modo ORDINATO tramite listInsert
    list = listInsert(list, rand()%100);
    //printf("\n");
    //listPrint(list);
    } 
    printf("\nLISTA: ");
    listPrint(list);
    printf("\nLISTA ITERATIVA: ");
    listPrint(listDupEven(list));
    printf("\nLISTA RICORSIVA: ");
    listPrint(listDupEvenRecursive(list));
    
    
}



