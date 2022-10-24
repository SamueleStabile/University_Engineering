//Samuele Stabile 18 Ottobre 2021

#include <stdio.h>
#include <stdlib.h>
#include "ArrayDinamico.h"
#include "TInfo.h"
#include "assert.h"

/*
 * 
 */
void arrayReverse(TArray* array){
    if (array->length==0 || array->length==1)
        return;
    
    array->length--; //perchè parte da n-1
    TInfo tmp = array->items[0]; //swap   
    array->items[0]=array->items[array->length]; //swap
    array->items[array->length]=tmp; //swap
    
    array->items++; //punto al prossimo elemento
    array->length--; //tolgo gli spazi vuoti
    arrayReverse(array);
    array->items--;
    array->length=array->length+2;
    
}

int main(int argc, char** argv) {
    
    TArray A = arrayCreate(argc-1);
    for(int i=1; i<argc; i++)
        A.items[i-1]=atoi(argv[i]);
    
    arrayPrint(&A);
    //infoPrint(0); //senza questo non funziona arrayPrint
    printf("\n");
    arrayReverse(&A);
    arrayPrint(&A);

    return (EXIT_SUCCESS);
}

