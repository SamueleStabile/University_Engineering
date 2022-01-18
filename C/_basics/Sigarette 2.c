/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Samu
 *
 * Created on 24 November 2021, 17:06
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
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