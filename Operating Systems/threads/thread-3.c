#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *calcola_indice(void* args){
    
    int *index = (int *)args;
    
    printf("Indice: [%d]\n", *index);
    return NULL;
}

int main(int argc, char*argv[]){
    
    pthread_t tid;
    
    int num = atoi(argv[1]);
    printf("Leggo [%d]\n\n", num);
    
    for(int i = 0 ; i < num ; i++){
        if(pthread_create(&tid, NULL, calcola_indice, &i) != 0){
            printf("Errore pthread_create");
            return 1;
        }
        pthread_join(tid, NULL);
    }
    
    return 0;
}