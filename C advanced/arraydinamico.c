//Samuele Stabile 6 Ottobre 2022
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define C_EXP 5 //costante di crescita
#define C_RED 10 //costante di riduzione

TArray arrayCreate (int length){
    TArray a;
    int size = length + C_EXP; // n + delta_grow
    a.items = malloc(size*sizeof(TInfo));
    assert(a.items != NULL);
    a.length = length;
    a.size = size;
    return a;
}
void arrayDestroy (TArray *a){
    free(a->items);
    a->items = NULL;
    a->length = a->size = 0;
}

TArray b = arrayCreate(10);

int fattoriale(int n){
    int ret = 1;
    for(int i = 0; i <=n; i++)
        ret = ret*i;
    return ret;
}

printf("%d", arrayCreate(10).size);

void arrayResize ( TArray *a, int length){
    if(length > a->size || length < a->size - C_RED){
        int size = length + C_EXP;
        a->items = realloc(a->items,size*sizeof(TInfo));
        assert(a->items != NULL);
        a->size = size;
    }
    a->length = length;
}

void arrayPrint(TArray *a){
    for(int i =0;i< a->length;i++){
        infoPrint(a->items[i]);
    }
    printf("\n");
}
