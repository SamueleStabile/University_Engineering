/*
 * TList: lista ordinata
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "TList.h"

/* operazioni sui nodi */

TNode *nodeCreate(TInfo info) {
    TNode *new = malloc (sizeof(TNode));
    if (new != NULL) {
        new->info = info;
        new->link = NULL;
    }
    return new;
}

void nodeDestroy(TNode *node) {
    free (node);
}

/* operazioni sulle liste */

TList listCreate() {
    return NULL;
}
/*
TList listDestroy(TList list) {
    TNode *node;
    while (list != NULL) {
        node = list;
        list = list->link;
        nodeDestroy(node);
    }
    return list;
}*/
/* versione ricorsiva*/
TList listDestroy(TList list) {
        if (list != NULL) {
                TNode *node=list;
		TList l=list->link;
                nodeDestroy(node);
                listDestroy(l);
        }
        return list;
}

/*
void listPrint(TList list) {
    if (list != NULL) {
        infoPrint (list->info);
        listPrint (list->link);
    }
    else 
        printf ("\n");
}
*/
/* versione iterativa */
void listPrint(TList list) {
	while (list!=NULL) {
		infoPrint(list->info);
		list=list->link;
	}

}


/*
TNode *listSearch(TList list, TInfo info) {
    if (list == NULL || infoGreater(list->info, info)) 
        return NULL;
    if (infoEqual(list->info, info))
        return list;
    return listSearch(list->link, info);
}
*/

/* versione iterativa */

TNode *listSearch(TList list, TInfo info) {
	while (list!=NULL && infoLess(list->info,info))
		list=list->link;
	if (list!=NULL && infoEqual(info,list->info)==1)
		return list;
	return NULL;
}

/*

TList listInsert(TList l, TInfo info) {
    if (l == NULL || infoGreater(l->info, info)) {
        TNode *node = nodeCreate(info);
        assert (node != NULL);
        node->link = l;
        return node;
    }
    l->link = listInsert(l->link, info);
    return l;
}

*/
/* versione iterativa */
TList listInsert(TList l, TInfo info) {
	TNode *p=NULL;
	TNode *n=l;	
	while(n!=NULL && infoLess(n->info,info)) {
		p=n;
		n=n->link;
	}
        TNode *node = nodeCreate(info);
        assert (node != NULL);
	if (p!=NULL) {
		p->link=node;
		node->link=n;
		return l;
		}
	node->link=l;
	return node;
	
}
TList listAdd(TList l, TInfo info){ //inserisice elementi nella lista in maniera non ordinata
    TNode *p=NULL;
	TNode *n=l;	

    TNode *node = nodeCreate(info);
    assert (node != NULL);
	
    if (p!=NULL) {
		p->link=node;
		node->link=n;
		return l;
		}
	node->link=l;
	return node;    
}   
/*


TList listDelete(TList l, TInfo info) {
    if (l == NULL || infoGreater(l->info, info)) 
        return l;
    if (infoEqual(l->info, info)) {
        TList m = l->link;
        nodeDestroy(l);
        return m;
    }
    l->link = listDelete(l->link, info);
    return l;
}


*/ 
TList listDelete(TList l, TInfo info) {
	TNode *p=NULL;
	TNode *n=l;	
	while(n!=NULL && infoLess(n->info,info)) { 
		p=n;
		n=n->link;
	}
	if (l!=NULL)
		if (infoEqual(n->info,info)==1) {
			if (n==l)
				l=l->link;
			else
				p->link=n->link;
			nodeDestroy(n);		
		}
	return l;
}
