#include <stdio.h>
#include <stdlib.h>
 
/*
 * 
 */
void stampa_vett(int vett[], int num);

float media_vett(int vett[],int num);

int main(int argc, char** argv) {

    int d = 5;
    int v[]={2,3,4,5,6};

    stampa_vett(v, d);

    float m = media_vett(v, d);

    printf("La media e': %.2f\n",m);

    return 0;
}
 
void stampa_vett(int vett[], int num) {

    int i;

    for(i=0; i<num; i++){
        printf("il numero del vettore e': %d\n", vett[i]);

    }
 
}
float media_vett(int vett[],int num){
    int somma=0; 
    int i;

    for(i=0; i<num; i++){
        somma+=vett[i];


    }

    float media= somma/num;

    return media;
 
}