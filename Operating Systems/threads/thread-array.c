#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <math.h>

typedef struct{
    float *vet;
    int numero;
} TParam;

void *thread_func(void*args){
    TParam *param = (TParam*)args;
    TParam array = *param;
    
    for(int i = 0; i<array.numero; i++){
        array.vet[i] = sqrt(array.vet[i]);
    }
    return NULL;
}
int main(int argc, char*argv[]){
    
    pthread_t tid[2];
    TParam targs[2];
    int numero;

    
    numero = atoi(argv[1]);
    printf("Leggo: [%d]\n\n", numero);
    
    float array[numero];
    
    for(int i = 0; i < numero; i++){
        array[i] = i+1;
        //printf("array [%f]\n", array[i]);
    }
    
    targs[0].vet = array;
    targs[0].numero = numero/2;
    targs[1].vet = array + numero/2;
    targs[1].numero = numero - numero/2;
    
    
    /*
    printf("\n-----DEBUG----- primo vet\n");
    for(int i = 0; i < targs[0].numero; i++){
        printf("array [%f]\n", targs[0].vet[i] );
    }
    printf("\n-----DEBUG----- secondo vet\n");
     for(int i = 0; i < targs[1].numero; i++){
        printf("array [%f]\n", targs[1].vet[i] );
    }*/
    
    
    for(int i = 0; i < 2; i++){
        if(pthread_create(&tid[i], NULL, thread_func, &targs[i]) != 0){
            printf("Errore pthread_create");
            return 1;
        }
        else{
            pthread_join(tid[i], NULL);
        }
    }
    
    for(int i = 0; i < numero; i++){
        printf("[%f]\n", array[i]);
    }
    return 0;
}



