/*
Esercizio 12 (Sincronizzazione) - Homework
Si realizzi un programma in C che crea un thread produttore e dieci (10) thread consumatori, che
eseguono le funzioni producer_thread e consumer_thread. I thread condividono un buffer, definito
attraverso la struttura TBuffer, che può contenere una stringa oppure essere vuoto. Inoltre, i thread
consumatori hanno un numero identificativo, diverso per ciascuno di essi, che va da 1 a 10.
Il thread producer ripete le seguenti operazioni:
1. Aspetta che il buffer sia vuoto
2. Legge una stringa da tastiera (con fgets) inserendola nel buffer
3. Rende il buffer non vuoto
4. Ricomincia dal passo 1.
I thread consumer ripetono le seguenti operazioni:
1. Aspetta che il buffer sia non vuoto
2. Stampa il proprio numero identificativo insieme alla stringa presente nel buffer.
3. Rende il buffer vuoto
4. Attende per 10 secondi.
5. Ricomincia dal passo 1.
I thread devono gestire in maniera appropriata la sincronizzazione nell’accesso al buffer.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>

/* Lunghezza massima di una stringa */
#define MAX_STRING 120
/* Numero di consumatori da creare */
#define NUM_CONSUMERS 10
/* Definizione del tipo TBuffer */
typedef struct
{
    char stringa[MAX_STRING];
    bool vuoto; /* true se il buffer e' vuoto; false se non vuoto */
    pthread_mutex_t mutex;
    pthread_cond_t cond_var;
} TBuffer;
/* Parametri per i consumatori */
typedef struct 
{
    int numero_identificativo;
    TBuffer *buffer;
} TConsumerParam;
/* Prototipi delle funzioni */
void *producer_thread(void *);
void *consumer_thread(void *);

int main(int argc, char *argv[])
{
    
}

void *producer_thread(void *)
{

}
void *consumer_thread(void *)
{

}
