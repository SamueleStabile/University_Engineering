/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: speaker
 *
 * Created on October 10, 2022, 10:55 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "ArrayDinamico.h"
/*
 * 
 */

void Transfer(TArray *A, TArray*B) {
    if (A->length==0)
        return;
    B->items[A->length-1]=A->items[A->length-1];
    arrayResize(A,A->length-1);
    Transfer(A,B);
}

int main(int argc, char** argv) {
    TArray A=arrayCreate(argc-1);
    TArray B=arrayCreate(0);
    for (int i=1;i<argc;i++)
        A.items[i-1]=argv[i];
    printf("\n A=");arrayPrint(&A);
    arrayResize(&B,A.length);
    Transfer(&A,&B);
    printf("\n A=");arrayPrint(&A);
    printf("\n B=");arrayPrint(&B);
    arrayDestroy(&A);
    arrayDestroy(&B);
    return (EXIT_SUCCESS);
}
