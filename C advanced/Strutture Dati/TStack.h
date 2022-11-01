/*
 * TStack: implementazione di uno stack attraverso un array dinamico
 */

#ifndef TSTACK_H
#define TSTACK_H

#include "TInfo.h"
#include "TArray.h"

typedef struct {
    TArray a;
} TStack;

TStack stackCreate(void);
void stackDestroy(TStack *s);
void stackPush(TStack *s, TInfo x);
TInfo stackPop(TStack *s);
TInfo stackTop(TStack *s);
int stackIsEmpty(TStack *s);

#endif