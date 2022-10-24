/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: andre
 *
 * Created on 17 ottobre 2022, 19.13
 */

#include <stdio.h>
#include <stdlib.h>
#include "ArrayDinamico.h"
#include "TInfo.h"
/*
 * 
 */

TArray *arrayIntersect(TArray* a, TArray* b){
    TInfo tmp;
    TArray c=arrayCreate(0);            //Se la funzione ha come valore di ritorno un puntatore a TArray si va in segmentation fault
    TArray *ret = &c;
    
    for(int i=0; i<a->length; i++){
        tmp=NULL;
        for(int j=0; j<b->length; j++){
            if(infoEqual(a->items[i],b->items[j]))
                tmp=a->items[i];
        } 
        if (tmp!=NULL)
            arrayAdd(ret,tmp);
        }
    return ret;
}

int main(int argc, char** argv) {
    
    TArray A=arrayCreate(7);
    TArray B=arrayCreate(4);
    A.items[0]=11;
    A.items[1]=10;
    A.items[2]=18;
    A.items[3]=11;
    A.items[4]=30;
    A.items[5]=21;
    A.items[6]=18;
    B.items[0]=18;
    B.items[1]=21;
    B.items[2]=31;
    B.items[3]=1;
    arrayPrint(&A);
    arrayPrint(&B);
    TArray *C=arrayIntersect(&A,&B);
    arrayPrint(C);
    return (EXIT_SUCCESS);
}
