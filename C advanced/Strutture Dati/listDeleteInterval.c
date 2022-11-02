/*Samuele Stabile 30 Ottobre 2022
*
*
Implementare la funzione (sia iterative che ricorsiva)
listDeleteInterval che, data una lista ordinata e due valori min e
max, rimuove dalla lista tutti gli elementi compresi nell'intervallo
[min, max].
TList listDeleteInterval (TList list, TInfo min, TInfo max)
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

TList listDeleteInterval(TList list, TInfo min, TInfo max){
    
    if(list==NULL||infoGreater(list->info,max))
        return list;

    list->link=listDeleteInterval(list->link, min, max);

    if(infoEqual(list->info,max) || infoEqual(list->info,min) || infoGreater(max,list->info) && infoGreater(list->info,min)){
        TList tmp=list->link; //salvo l'elemento successivo
        nodeDestroy(list); //distruggo il nodo corrente
        list=tmp; //ora list sará ugale a tmp ossia il nodo successivo
    }

    return list;
}

//Versione alternativa ricorsiva

int main(int argc, char **argv){

    TList list = listCreate();
    TInfo max,  min;
    for( int i = 0; i<20; i++){ //riempio la lista in modo ORDINATO tramite listInsert
        list = listInsert(list, rand()%100);
        }   

    listPrint(list);
    
    printf("\nMAX:");
    scanf("%d",&max);
    printf("\nMIN:");
    scanf("%d",&min);

    listDeleteInterval (list,min,max);
    listPrint(list);

    //TList ret2 = listDeleteIntervalRec (list,min,max);
    //listPrint(ret2);
}



