/*Samuele Stabile 1 November 2022
*
*
Implementare la funzione iterative listInvertStack che,
utilizzando una pila di appoggio, inverte una lista.
void listInvertStack (TList list)
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "TList.h"
#include "TInfo.h"
#include "TStack.h"
#include "TArray.h"
#include <stdbool.h>

bool list_is_empty(TList L){
    return L==NULL ;
}
//Versione ITERATIVA
void listInvertStack (TList list){

TStack stack = stackCreate();
printf("\n");

TList temp = list;

    while(!list_is_empty(list)){
        stackPush(&stack, list->info);
        printf("PUSHING: [%d] -", list->info);
        arrayPrint(&(stack.a));
        list =  list->link;
    }

list = temp;

    while(!stackIsEmpty(&stack)){
        
        list->info =  stackPop(&stack);
        list = list->link;
        printf("\n");
        printf("POPPING: ");
        listPrint(temp);
    }
}

//Versione alternativa ricorsiva

int main(int argc, char **argv){

    TList list = listCreate();
    TInfo max,  min;
    for( int i = 0; i<20; i++){ //riempio la lista in modo ORDINATO tramite listInsert
        list = listInsert(list, rand()%100);
        }   
        listPrint(list);

        listInvertStack(list);
        printf("\n\nLista Invertita: ");
        listPrint(list);
}



