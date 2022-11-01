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
//Versione ITERATIVA
TList listDeleteInterval (TList list, TInfo min, TInfo max){

	TNode* curr = list;
	TNode* prev = NULL;

	// Skip gli elementi inferiori al minimo
	while((curr != NULL) && infoLess(curr->info, min)){
	    printf("Skip: %d\n", curr->info);
		prev = curr; //salvo corrente nel precedente
		curr = curr->link; //incremento lista
	}

    // Cancellazione elementi nel range
	while((curr != NULL) && (curr->info <= max)){
		printf("- DELETING:  %d\n", curr->info);

		if (prev == NULL){ // se prev == NULL mi trovo nel primo elemento "in testa"
		    list = curr->link; 
		    nodeDestroy(curr);
		    curr = list;
		}
		else{
    		prev->link = curr->link; 
    		nodeDestroy(curr);
    		curr = prev->link;
		}
	}
    return list;
}

TList listDeleteIntervalRec(TList list, TInfo min, TInfo max) {
    printf("> chiamata a listDeleteIntervalRec tra %d e %d:\n", min, max);
    
	// Caso Base
    if (list == NULL || infoLess(max, list->info)){
        if (list == NULL)
            printf("- caso base a fine lista\n");
        else
    	    printf("- caso base a %d\n", list->info);
        return list;
    }

    // Divide et Impera
    TList tail = listDeleteIntervalRec(list->link, min, max);
    if (tail == NULL)
        printf("- per info %d tail a fine coda\n", list->info);
    else
        printf("- per info %d tail %d\n", list->info, tail->info);

    if (infoGreater(min, list->info)){
        printf("- skip info %d\n", list->info);
        list->link = tail;
    }
    else {
        printf("* delete info %d\n", list->info);
        nodeDestroy(list);
        list = tail;
    }
    
    // Combina
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

    TList ret = listDeleteInterval (list,min,max);
    listPrint(ret);

    TList ret2 = listDeleteIntervalRec (list,min,max);
    listPrint(ret2);
}



