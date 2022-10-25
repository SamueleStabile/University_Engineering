/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: andre
 *
 * Created on 13 ottobre 2022, 16.23
 */

#include <stdio.h>
#include <stdlib.h>
#include "assert.h"
#include "ArrayDinamico.h"
#include "TInfo.h"
/*
 * 
 */

TInfo arraySumInterval(TArray* array,TInfo min, TInfo max, int limit){
    assert(limit>=0);
    int sum=0;
    if (limit==0)
        return 0;
    if (limit>(array->length))
        limit=array->length;
    limit--;
    if (array->items[limit]<=max && array->items[limit]>=min)
        sum=sum+array->items[limit];
    sum=sum+arraySumInterval(array, min, max, limit);
    return sum;

}

int main(int argc, char** argv) {
    
    TArray A=arrayCreate(argc-1);
    for (int i=1;i<argc;i++)
        A.items[i-1]=atoi(argv[i]);
        arrayPrint(&A);
        infoPrint(arraySumInterval (&A, 11,20,5));

    return (EXIT_SUCCESS);
}