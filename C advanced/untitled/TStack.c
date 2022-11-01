/*
 * TStack: implementazione di uno stack attraverso un array dinamico
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "TStack.h"

TStack stackCreate(void) {
    TStack s;
    s.a = arrayCreate(0);
    return s;
}

void stackDestroy(TStack *s) {
    arrayDestroy(&s->a);
}

void stackPush(TStack *s, TInfo x) {
    arrayResize(&s->a, s->a.length+1);
    s->a.items[s->a.length-1] = x;
}

TInfo stackPop(TStack *s) {
    TInfo x = s->a.items[s->a.length-1];
    arrayResize(&s->a, s->a.length-1);
    return x;
}

TInfo stackTop(TStack *s) {
    return s->a.items[s->a.length-1];
}

int stackIsEmpty(TStack *s) {
    return s->a.length == 0;
}
