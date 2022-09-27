//Samuele Stabile 27 Settmebre 2022

#ifndef LIBRETTO_H
#define LIBRETTO_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
// Definizione della struct data
struct Data{
    int giorno;
    int mese;
    int anno;
};

// Alias per struct Data al fine di semplificare la notazione
typedef struct Data T_Data;

// Definizione della struct Esame
struct Esame{
    char nome[100];
    int voto;
    T_Data data;
};
// Alias per struct Esame al fine di semplificare la notazione
typedef struct Esame T_Esame;

// Funzioni di allocazione, de-allocazione e re-allocazione del libretto inteso come array di T_Esame
T_Esame * alloca_libretto        (int numero_esami){
    int *p;
  T_Esame *p = (T_Esame*)malloc(numero_esami*sizeof(T_Esame));
    assert(*p!=NULL);
};
T_Esame * realloca_libretto      (T_Esame * libretto, int numero_esami);
T_Esame * aggiungi_esame_a_scelta(T_Esame * libretto, int * numero_esami);
void dealloca_libretto           (T_Esame * libretto);

// Funzioni di modifica del contenuto del libretto
void inizializza_libretto   (T_Esame * libretto, int numero_esami);
void sostieni_esame         (T_Esame * libretto, int numero_esami);

// Funzioni di lettura del contenuto del libretto (uso di const per il puntatore libretto)
void stampa_esame       (const T_Esame * libretto);
void stampa_libretto    (const T_Esame * libretto, int numero_esami);
void trova_esame_da_voto(const T_Esame * libretto, int numero_esami, int voto);
void trova_esame_da_data(const T_Esame * libretto, int numero_esami, T_Data data);

#endif /* LIBRETTO_H */

