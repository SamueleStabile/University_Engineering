#ifndef ARRAYDINAMICO_H
#define ARRAYDINAMICO_H

/*
 * TArray: array dinamico
 */

#include "TInfo.h"

typedef struct {
    TInfo* items; // puntatore agli elementi dell'array
    int length;   // lunghezza array    
    int size;     // dimensione allocata (>= length)
} TArray;

TArray arrayCreate (int length);
void arrayDestroy (TArray *a);
void arrayResize (TArray *a, int length);
void arrayPrint(TArray *a);

// Funzioni di utilità
void arrayAdd (TArray *a, TInfo info);
TInfo arrayGet (TArray *a, int pos);
int arrayLength (TArray *a);
void arraySet (TArray *a, int pos, TInfo info);

#endif /* ARRAYDINAMICO_H */

