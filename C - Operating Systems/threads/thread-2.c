#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

typedef struct{
    int numero;
    int somma;
} TParam;

void *calcola_somma(void *args){
    
    TParam *param = (TParam *)args;
    
    param->somma = 0;
    
    for(int i = 1; i <= (param->numero); i++ ){
        param->somma += i;
    }
}

int main(int argc, char *argv[]){
    
    if(argc != 2){
        printf("Inserisci un argomento da linea di comando!");
        return 1;
    }
    pthread_t tid;
    TParam targs;
    
    targs.numero = atoi(argv[1]);
    
    if(pthread_create(&tid, NULL, calcola_somma, &targs) !=0){
        printf("Errore pthread_create\n");
        return 1;
    }else{
    
    pthread_join(tid, NULL);
    printf("Somma: [%d] ", targs.somma);
        
    }
    
}