//Samuele Stabile 25 Ottobre 2022
#include <stdio.h>
#include <stdlib.h>
#include "TList.h"
#include "TInfo.h"
#include <stdbool.h>

bool list_is_empty(TList L){
    return L==NULL ;
}

//VERSIONE ITERATIVA
TInfo Minimo(TList list){ 
    TInfo min = list->info; //inizializzo ilprint primo minimo
        while(!list_is_empty(list)){
             //ciclo di ricerca del minimo
            if(infoLess(list->info,min)){
                min = list->info;
            }
            list = list->link; //aggiorno il link al prossimo elemento "link++"
        }//------fine ciclo
    return min;
}

int main(int argc, char **argv){

    TList list = listCreate(); //creo la lista de

    for( int i = 0; i<20; i++){ //riempio la lista in modo NON ORDINATO tramite listAdd
    list = listAdd(list, rand()%100);
    } 
    printf("\nLISTA: ");
    listPrint(list);
    printf("\nVALORE MINIMO LISTA: %d",Minimo(list));
}



