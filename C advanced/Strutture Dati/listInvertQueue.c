/*Samuele Stabile 1 November 2022
*
*
Implementare la funzione ricorsiva listInvertQueue che,
utilizzando una coda di appoggio, inverte una lista.
void listInvertQueueRec (TList list, TQueue* queue)
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "TList.h"
#include "TInfo.h"
#include "TStack.h"
#include "TArray.h"
#include "TQueue.h"
#include <stdbool.h>

bool list_is_empty(TList L){
    return L==NULL ;
}

void listInvertQueueRec (TList list, TQueue* queue){

    if(list == NULL){   //caso  base
        return;
    }

    //primo while prima della chiamata ricorsiva
    queueAdd(queue,list->info); //aggiungo list->info alla queue

    listInvertQueueRec(list->link, queue); //ricorsione al prossimo elemento

    list->info = queueRemove(queue); //rimuovo l'elemento dalla queue e lo inserisco in list->info giá invertito poiché la pila inverte in automatico
}

int main(int argc, char **argv){
    TQueue queue = queueCreate();
    TList list = listCreate();

    for( int i = 0; i<20; i++){ //riempio la lista in modo ORDINATO tramite listInsert
        list = listInsert(list, rand()%100);
        }   
    listPrint(list);
    listInvertQueueRec(list,&queue);
    printf("\n");
    listPrint(list);
}



