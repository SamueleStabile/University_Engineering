/*
 *
 * Completare il programma C che, letto da file un array di numeri interi, 
 * costruisca un nuovo array contenente i soli valori del primo array maggiori 
 * di un valore soglia T letto da input e verifichi se, all'interno del nuovo array, gli elementi pari 
 * sono in numero maggiore o uguale degli elementi dispari.
 * Per completare il programma, si richiede la realizzazione di tre funzioni:
 * - una funzione che riceva in ingresso un array ed un valore T e costruisca il nuovo array contenente i soli valori maggiori di T
 * - una funzione che verifichi se gli elementi pari di un array di interi sono in numero maggiore o uguale di quelli dispari
 * - una funzione che scriva su file di testo gli elementi dell'array costruito
 * Delle tre funzioni richieste Ã¨ fornito il prototipo in accordo al quale va realizzato il codice.
 * 

 Un esempio di file di input e' il seguente:

  2 1 4 11 5 8 0 14 8

Un esempio di esecuzione e':

Inserire nome file: in.txt

2 1 4 11 5 8 0 14 8

Inserire il valore soglia: 3
 
Gli elementi maggiori di 3 sono:

4 11 5 8 14 8
 
Maggioranza di pari.


 */

#include <stdio.h>
#include <stdlib.h>

#define DIM 20
#define NCAR 100

/* Prototipi delle funzioni  */
FILE *apriFile(char mode[]);
int leggiVettore(FILE *fpin, int array[]);
void stampaVettore(int a[], int n);
void creaSoglia(int vet[], int n, int T, int newvet[], int*newn);
int MaggPari(int vet[], int n);
void scriviVettore(FILE *fp, int vet[], int n);

/* Funzione main */
int main() {

    FILE *fp;
    int a[DIM], v[DIM];
    int n, T, nv, val;

    /* Apre il file di input */
    fp = apriFile("r");

    /* Legge la vettore da file */
    n = leggiVettore(fp, a);

    /* Chiude il file */
    fclose(fp);

    /* Stampa la vettore a video */
    stampaVettore(a, n);

    /* Legge il valore soglia */
    printf("Inserire il valore soglia: ");
    scanf("%d", &T);

    /* Costruisce il nuovo array, lo stampa a video e lo scrive su file */
    creaSoglia(a, n, T, v, &nv);
    printf("Gli elementi maggiori di %d sono:\n", T);
    stampaVettore(v, nv);

    /* Apre il file di output */
    fp = apriFile("w");

    /* Scrive il nuovo array su file */
    scriviVettore(fp, v, nv);

    /* Chiude il file */
    fclose(fp);

    /* Controlla nell'array il numero di pari Ã¨ maggiore o uguale dei dispari */
    val = MaggPari(v, nv);

    if (val == 1)
        printf("Maggioranza di pari.\n");
    else
        printf("Maggioranza di dispari\n");



    return (EXIT_SUCCESS);
}

/*
 La funzione ApriFile apre il file il cui nome e' fornito in input
 dall'utente nella modilitÃ  specificata dal parametro formale mode
 e restituisce il puntatore al file
 */
FILE *apriFile(char mode[]) {

    FILE *fptr;
    char nome_file[NCAR];

    printf("Inserire nome file: ");
    scanf("%s", nome_file);

    if ((fptr = fopen(nome_file, mode)) == NULL) {
        printf("Errore apertura file");
        exit(EXIT_FAILURE);
    }

    return fptr;
}

/*
La funzione LeggiVettore  riceve il nome del file input, il vettore dove memorizzare
i valori letti. Restituisce il numero di elementi letti
 */
int leggiVettore(FILE *fpin, int array[]) {
    int i;

    i = 0;
    while (!feof(fpin)) {
        fscanf(fpin, "%d", &array[i]);
        i++;
    }
    return i;
}

/* La funzione StampaVettore riceve come parametro un array a e la sua dimensione
 * e lo stampa a video */

void stampaVettore(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
return;

}




/* La funzione creaSoglia riceve come parametri di ingresso l'array vet, la sua dimensione n ed il valore intero T.
 Restituisce tramite parametri di uscita l'array newvet contenente i soli elementi di vet maggiori di T e la sua dimensione newn.
 */
void creaSoglia(int vet[], int n, int T, int newvet[], int *newn) {
   int i;
   *newn=0;
   for(i=0;i<n;i++){ 
   if(vet[i]>T){
   newvet[*newn]=vet[i];
*newn=*newn+1;

}

}
return;
}

/* La funzione MaggPari  riceve come parametro l'array vet e la sua dimensione n.
 Restituisce il valore 1 se il numero di elementi pari Ã¨ maggiore o uguale al numero degli elementi dispari;
 restituisce il valore 0 altrimenti.
 */
int MaggPari(int vet[], int n) {
int i,cont_p=0,cont_d=0;
for(i=0;i<n;i++){
    if(vet[i]%2==0){
        cont_p++;
    }
    else{
            cont_d++;
        }
    
}
if(cont_p>=cont_d){
    return 1;
}
else{
    return 0;
}

}

/* La funzione scriviVettore riceve come parametri il puntatore a file di output, l'array vet e la sua dimensione n.
   Scrive gli elementi del vettore sul file di output.
 */
void scriviVettore(FILE *fp, int vet[], int n) {

    /* FUNZIONE DA COMPLETARE */
int i;
    for(i=0;i<n;i++){
        fprintf(fp, "%d", &vet[i]);
    }
return;    
}