/*
 * TQueue: implementazione di una coda attraverso un array dinamico
 */

#ifndef TQUEUE_H
#define TQUEUE_H

#include "TArray.h"

typedef struct {
    int n; // numero di elementi
    int f; // indice front
    int b; // indice back
    TArray a; 
} TQueue;

TQueue queueCreate ();
void queueDestroy (TQueue *q);
void queueAdd (TQueue *q, TInfo x);
TInfo queueRemove (TQueue *q);
TInfo queueFront (TQueue *q);
int queueIsEmpty (TQueue *q);

#endif