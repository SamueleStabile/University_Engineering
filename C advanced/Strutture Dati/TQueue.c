/*
 * TQueue: implementazione di una coda attraverso un array dinamico
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "TQueue.h"

TQueue queueCreate () {
    TQueue q;
    q.n = q.f = q.b = 0;
    q.a = arrayCreate(0);
    return q;
}

void queueDestroy (TQueue *q) {
    q->n = q->f = q->b = 0;
    arrayDestroy (&q->a);
}

void queueAdd (TQueue *q, TInfo x) {
    if (q->n == q->a.length) { // occorre ridimensionare l'array
        int len = q->a.length;
        arrayResize (&q->a, len*2+1); 
        if (q->n > 0 && q->f >= q->b) { // occorre spostare gli ultimi elementi
            int n = len-q->f; // numero di elementi da spostare
            for (int i = 1; i <= n; i++)
                q->a.items[q->a.length-i] = q->a.items[len-i];
            q->f = q->a.length-n; // aggiorna front
        }
    }
    q->a.items[q->b] = x;
    q->b = (q->b+1)%q->a.length;
    q->n++;
}

TInfo queueRemove (TQueue *q) {
    TInfo x = q->a.items[q->f];
    q->f = (q->f+1)%q->a.length;
    q->n--;
    return x;
}

TInfo queueFront (TQueue *q) {
    return q->a.items[q->f];
}

int queueIsEmpty (TQueue *q) {
    return q->n == 0;
}