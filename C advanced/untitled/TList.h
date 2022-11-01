/*
 * TList: lista ordinata
 */

#ifndef TLIST_H
#define TLIST_H

#include "TInfo.h"

struct SNode {
    TInfo info;
    struct SNode *link;
};
typedef struct SNode TNode;
typedef TNode *TList;

TNode *nodeCreate(TInfo);
void nodeDestroy(TNode*);
TList listCreate();
TList listDestroy(TList);
void listPrint(TList);
TNode *listSearch(TList, TInfo);
TList listInsert(TList, TInfo);
TList listDelete(TList, TInfo);
TList listAdd(TList, TInfo);

#endif

