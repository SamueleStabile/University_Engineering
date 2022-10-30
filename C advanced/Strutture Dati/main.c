//Samuele Stabile 25 Ottobre 2022
#include <stdio.h>
#include <stdlib.h>
#include "TList.h"
#include "TInfo.h"
#include <stdbool.h>

bool list_is_empty(TList L){
    return L==NULL ;
}

TList listDupEven(TList list){
    // caso base
    TList ret = listCreate();
    while(!(list == NULL)){
        if(list->info%2==0){
            ret = listAdd(ret, list->info);
        }
        ret = listAdd(ret, list->info);
        list = list->link;
    }
    return ret;
}
//VERSIONE RICORSIVA

int main(int argc, char **argv){

    TList list = listCreate(); //creo la lista de

    for( int i = 0; i<20; i++){ //riempio la lista in modo NON ORDINATO tramite listAdd
        list = listAdd(list, rand()%100);
    }
    printf("\nLISTA: ");
    listPrint(list);
    printf("\nLISTA: ");
    listPrint(listDupEven(list));

}



