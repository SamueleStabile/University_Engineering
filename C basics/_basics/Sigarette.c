
#include <stdio.h>
#include <stdlib.h>

int main(void){
 int sigarette, mozziconi;

 printf("Inserire Numeri di Sigarette: ");
 scanf("%d", &sigarette);
 
 while(sigarette < 0){
     printf("Non puoi avere sigarette negative! \n");
     printf("Inserire Numeri di Sigarette: ");
     scanf("%d", &sigarette);
 }

 mozziconi = sigarette/3;

 mozziconi = sigarette + mozziconi;
 
 printf("Sigarette totali: %d", mozziconi);
 

return 0;
 

}