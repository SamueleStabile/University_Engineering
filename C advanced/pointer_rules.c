//Samuele Stabile 19 Settembre 2022

#include <stdio.h>
#include <stdlib.h>
qq
int main(int argc, char** argv){

     int x = 10;
     int *y= &x;
    printf("la variabile x vale %d e si trova allʹindirizzo %p \n", x, y);
// è possibile usare p per stampare il valore di una variabile di tipo puntatore
    printf("la variabile x vale %d e si trova allʹindirizzo %p \n", *y, &x);
// è possibile usare * prima di una variabile di tipo puntatore per indicare il valore contenuto
// nellʹarea di memoria il cui indirizzo è memorizzato nella variabile di tipo puntatore

return 0;

}
 