/*Samuele Stabile 30 Ottobre 2022
* 
*
Implementare la funzione ricorsiva listInsertAt che, data una
lista, inserisce un ulteriore element in una posizione
desiderata.
Per convenzione, l’inserimento in prima posizione si otterrà
con indice 0.
TList listInsertAt (TList list, Tinfo info, int pos)
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

TList listInsertAt(TList list, TInfo info, int pos){

    if (pos==0 || list==NULL){ //una volta arrivati al caso base
        TNode* new = nodeCreate(info); //creaimo un nuovo nodo e linkiamo la vecchia lista ad esso
        new->link = list; //linkiamo il resto della lista al nodo
        return new; //ora restituiamo il nuovo nodo che andrá a finire in riga28 list->link = new
    }
    
    list->link = listInsertAt(list->link, info, pos-1); //scorriamo il vettore fino ad arrivare al caso base
    return list;
}
//VERSIONE RICORSIVA

int main(int argc, char **argv){

    TList list = listCreate(); //creo la lista de

    for( int i = 0; i<20; i++){ //riempio la lista in modo NON ORDINATO tramite listAdd
    list = listAdd(list, rand()%1000);
    } 
    printf("\nLISTA: ");
    listPrint(list);
    listInsertAt(list,69,5); //sostituisco 69 al posto 5
    printf("\nLISTA NUOVA: ");
    listPrint(list);
}



