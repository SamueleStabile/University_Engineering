#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "ArrayDinamico.h"

#define C_EXP 5  // costante di espansione
#define C_RED 10 // costante di riduzione

TArray arrayCreate (int length) {
    TArray a;
    int size = length + C_EXP;
    a.items = malloc(size * sizeof(TInfo));
    assert (a.items != NULL);
    a.length = length;
    a.size = size; 
    return a;
}

void arrayDestroy (TArray *a) {
    free(a->items);
    a->items = NULL;
    a->length = a->size = 0;
}

void arrayResize (TArray *a, int length) {
    if (length > a->size || length < a->size - C_RED) {
        int size = length + C_EXP;
        a->items = realloc(a->items, size * sizeof(TInfo));
        assert (a->items != NULL);
        a->size = size;        
    }
    a->length = length;
 }

void arrayPrint(TArray *a) {
    for (int i = 0; i < a->length; ++i)
        infoPrint(a->items[i]);
    printf ("\n");
}

/* FUNZIONI DI UTILITA' */
// funzioni ausiliare per non accedere a basso livello alla struttura dati

// Aggiunta di un elemento in coda all'array
void arrayAdd (TArray *a, TInfo info) {
    arrayResize(a, a->length + 1);
    a->items[a->length - 1] = info;
}



// Lettura di un elemento in posizione pos
TInfo arrayGet (TArray *a, int pos) {
    return a->items[pos];
}

// Lettura della lunghezza dell'array
int arrayLength (TArray *a) {
    return a->length;
}

// Inserimento di un elemento in posizione pos con ridimensionamento automatico
void arraySet (TArray *a, int pos, TInfo info) {
    if (pos >= a->length)
        arrayResize(a, pos + 1);
    a->items[pos] = info;
}