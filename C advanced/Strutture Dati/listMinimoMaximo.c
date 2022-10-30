/*Samuele Stabile 25 Ottobre 2022
* 
*
Implementare la funzione ricorsiva listMinimo che, data una
lista NON ordinata di interi, restituisce il valore minimo.
TInfo listMinimo (TList list) 
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


//VERSIONE RICORSIVA
TInfo MinimoRecursive(TList list){
    TInfo min = list->info;
    if(list == NULL || list->link == NULL){ //caso base
        return min;
    }

    min = MinimoRecursive(list->link);

    if(infoLess(list->info,min)){
        min =list->info;
    }
    return min;
}



TInfo MaxRecursive(TList list){
    
    TInfo max = list->info;

    if(list == NULL || list->link == NULL){ //caso base
        return 0;
    }

    max =MaxRecursive(list->link);

    if(infoGreater(list->info,max)){
        max = list->info;
    }
    return max; 
}

int main(int argc, char **argv){

    TList list = listCreate(); //creo la lista de

    for( int i = 0; i<20; i++){ //riempio la lista in modo NON ORDINATO tramite listAdd
    list = listAdd(list, rand()%1000);
    } 
    printf("\nLISTA: ");
    listPrint(list);
    printf("\nVALORE MINIMO LISTA: %d",MinimoRecursive(list));
    printf("\nVALORE MAX LISTA: %d",MaxRecursive(list));
}



