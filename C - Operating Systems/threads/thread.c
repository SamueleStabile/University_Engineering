#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int somma; /* Variabile globale per il risultato */
/* Prototipo della funzione che verrà eseguita dal thread */

typedef struct{
    int numero;
    int somma;
} TParam;

void *calcola_somma(void *arg){
    
    TParam *param = (TParam *)arg; //assorbo il parametro nella funzione
    int n = param->numero;
    
    int i;

    param->somma = 0;
    
    for(i = 1; i<=n; i++){
        param->somma += i;
    }
    return NULL;
}

int main(int argc, char *argv[]) {
    
    
    
    if (argc!=2) {
    printf("Devi specificare un numero intero come parametro!\n");
    return 1;
    }
    
    TParam targs;
    targs.numero = atoi(argv[1]);
    
        pthread_t tid; /* Identificativo del nuovo thread */
        
        if (pthread_create(&tid, NULL, calcola_somma, &targs)!=0) {
            printf("Errore nella creazione del thread!\n");
            return 2;
    }
    /* Aspetta la fine del thread */
    pthread_join(tid, NULL);
    printf("Somma=%d\n", targs.somma);
    return 0;
}