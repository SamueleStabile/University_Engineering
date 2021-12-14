#include <stdio.h>
#include <stdlib.h>

#define MAXNUM 50

/*
*
*/
void leggi_vet(int vet[], int *n, int max);
void stampa_vet(int vet[], int num);
float media_vet(int vet[], int num);
void split_vet(int vet[], int num, int vetp[], int *nump, int vetd[], int *numd);
int main(int argc, char** argv) {

int v[MAXNUM],vpari[MAXNUM],vdisp[MAXNUM];
int num, npari, ndisp;

float mpari, mdisp;

leggi_vet(v,&num,MAXNUM);
split_vet(v, num, vpari, &npari, vdisp, &ndisp);

mpari = media_vet(vpari, npari);
mdisp = media_vet(vdisp, ndisp);

printf("Vettore pari:\n");
stampa_vet(vpari,npari);

printf("Media pari: %f\n", mpari);

printf("Vettore dispari:\n");
stampa_vet(vdisp,ndisp);

printf("Media dispari: %f\n", mdisp);

return (EXIT_SUCCESS);
}

void stampa_vet(int vet[],int n) {
int i;
for(i=0;i<n;i++)
printf("\t%d",vet[i]);
return;
}

float media_vet(int vet[], int num){
int i, somma;
float media;

i = 0;
somma = 0;
for(i = 0; i < num; i++)
somma = somma + vet[i];

return (float)somma/num;
}

void leggi_vet(int vet[], int *d, int max) {
int i;
int n;
do {
printf("Inserisci la dimensione del vettore: ");
scanf("%d", &*d);

if (*d > max || *d <= 0)
printf("Dimensione non valida, puoi inserire al max 30 elementi e min 1. \n");

} while (*d > max || *d <= 0);

for (i = 0; i<*d; i++) {
printf("Inserisci il %d° valore del vettore: ", i + 1);
scanf("%d", &vet[i]);
}
}