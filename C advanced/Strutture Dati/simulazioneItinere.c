/******************************************************************************

SIMULAZIONE PROVA MID-TERM
 
Dato un array dinamico arr, già popolato, il cui tipo degli elementi, ovvero
TInfo, è definito come INT, e messe a disposizione le funzioni per la gestione
delle strutture dati TList (lista ordinata), TArray (array dinamico) e una
funzione per inserire un elemento in posizione arbitraria in una lista,
si chiede di progettare e implementare le seguenti tre funzioni:

>> TList popolaListaDaArray (TArray arr)
    La funzione prende in input l’array dinamico e restituisce una lista
    ordinata contenente gli elementi di arr.
    Di tale funzione, si chiede una implementazione iterativa
    (non verranno valutate versioni ricorsive).

>> TInfo sommaDispari (TLista list)
    La funzione prende in input la lista e restituisce la somma dei soli
    elementi dispari della lista. Utilizzare una funzione ausiliaria
    infoAdd per sommare due TInfo.
    Di tale funzione, si chiede una implementazione ricorsiva
    (non verranno valutate versioni iterative).

>> TList estraiSottoLista (TList list, TInfo v)
    La funzione prende in input una lista NON ordinata e restituisce una
    nuova lista contenente soltanto gli elementi il cui campo TInfo è
    inferiore all’input v. Si testi questa funzione costruendo nel main.c una
    lista non ordinata costruita utilizzando la funzione listInsertAt.
    Di tale funzione, si chiede una implementazione ricorsiva
    (non verranno valutate versioni iterative).

Nota: L’unico file da consegnare è il file main.c
Eventuali funzioni di appoggio che dovessero essere utili o necessarie,
devono essere implementate nel file main.c
 
Non saranno valutate funzioni implementate:
- in altri file;
- violando le specifiche progettuali (es. funzione iterativa anziché ricorsiva)

*******************************************************************************/

#include <stdio.h>
#include <assert.h>
#include "ArrayDinamico.h"
#include "TList.h"


//***********       FUNZIONI FORNITE ALLO STUDENTE       ***********************
TList listInsertAt(TList l, TInfo info, int pos){
    /*
    Inserisce un elemento nella lista alla posizione indicata
    o in coda se la lista è troppo corta.
    Può generare liste NON ordinate.
    */

    // caso base
    if (pos==0 || l==NULL){
        TNode* new = nodeCreate(info);
        new->link = l;
        return new;
    }
    
    // combine              divide
    l->link = listInsertAt(l->link, info, pos-1);
    return l;
}

TInfo infoGet(){
    TInfo info;
    scanf("%d", &info);
    return info;
}


//***********       FUNZIONI RICHIESTE ALLO STUDENTE       *********************

TList popolaListaDaArray (TArray arr){
    TList list = listCreate();
    
    for(int i = 0; i < arr.length; i++){
        list = listInsert(list, arr.items[i]);
    }
    return list;
    /*
    La funzione prende in input l’array dinamico e restituisce una lista
    ordinata contenente gli elementi di arr.
    Di tale funzione, si chiede una implementazione iterativa
    (non verranno valutate versioni ricorsive).
    */
    
}


TInfo sommaDispari (TList list){

    TInfo sum = 0; 

    if(list == NULL){
        return 0;
    }

    sum = sommaDispari(list->link);

    if(!(list->info%2==0)){
        printf("\n[dispari %d]", list->info);
        sum = infoAdd(sum,list->info);

    }
     return sum;
    
    /*
    La funzione prende in input la lista e restituisce la somma dei soli
    elementi dispari della lista. Utilizzare una funzione ausiliaria
    infoAdd per sommare due TInfo.
    Di tale funzione, si chiede una implementazione ricorsiva
    (non verranno valutate versioni iterative).
    */
}


TList estraiSottoLista (TList l, TInfo v){
    
    if(l == NULL){
        return 0;
    }
    TList ret = estraiSottoLista(l->link,v);
    
    if(infoLess(l->info,v)){
        ret = listInsertAt(ret, l->info,0);
    }
       return ret;
    

    /*
    La funzione prende in input una lista NON ordinata e restituisce una
    nuova lista contenente soltanto gli elementi il cui campo TInfo è
    inferiore all’input v. Si testi questa funzione costruendo nel main.c una
    lista non ordinata costruita utilizzando la funzione listInsertAt.
    Di tale funzione, si chiede una implementazione ricorsiva
    (non verranno valutate versioni iterative).
    */
}


int main (int argc, char *argv[])
{
    int n;
    TArray array;
    TInfo info;
    
    printf("Inserisci il numero di elementi della lista: ");
    scanf("%d", &n);
    array = arrayCreate(n);
    
    for (int i=0; i<n; i++){
        printf("- inserisci l'elemento di posto %d: ", i);
        arraySet(&array, i, infoGet());
    }
    printf("Array: ");
    arrayPrint(&array);
    
    TList ordered_list = popolaListaDaArray(array);
    printf("\nLista ordinata: " );
    listPrint(ordered_list);
    
    TList unordered_list = listCreate();
    for (int i=0; i<n; i++)
        unordered_list = listInsertAt(unordered_list, arrayGet(&array, i), i);
    
    printf("\nLista NON ordinata: " );
    listPrint(unordered_list);
    
    printf("\nSomma dispari: %d", sommaDispari(ordered_list));
    printf("\nSomma dispari: %d", sommaDispari(unordered_list));
    
    printf("\nInserisci il valore limite: ");
    info = infoGet();
    TList unordered_sublist = estraiSottoLista(unordered_list, info);
    printf("\nSotto lista: "); listPrint(unordered_sublist);
    return 0;
}