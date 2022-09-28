//Samuele Stabile 19 Settembre 2022

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

     int x = 10;
     int *y= &x;
    printf("la variabile x vale %d e si trova allʹindirizzo %p \n", x, y);
// è possibile usare p per stampare il valore di una variabile di tipo puntatore
    printf("la variabile x vale %d e si trova allʹindirizzo %p \n", *y, &x);
// è possibile usare * prima di una variabile di tipo puntatore per indicare il valore contenuto
// nellʹarea di memoria il cui indirizzo è memorizzato nella variabile di tipo puntatore
//------------------------------------------------------------------
    int *v = NULL; //INIZIALIZZO PUNTATORE 
    //--------------------------------------------------------------
    int z[10] = {1,2,3,4,5,6,7,8,9,10};
    int *w = z;
    printf("\n[ELEMENTO vettore PUNTATO da *w]: %d\n",*w);
    printf("[INDIRIZZO vettore PUNTATO da w]: %p\n",w);
    printf("\nZ[2]= %d \nW[2]= %d \n", z[2], w[2]);
    printf("[Stampo Z[2] che equivale a *(w+2)] = %d\n", *(w+2));

    //--------------------------------------------------------------------------
    printf("\ny++ = %p", y++);
    printf("\n(*y)++ = %d", (*y)++);


return 0;

}
 