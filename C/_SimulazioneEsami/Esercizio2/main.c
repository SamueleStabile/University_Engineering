/*
 
 * Completare il programma C che, letta da file una matrice quadrata contenente numeri interi, 
 * costruisca un array contenente nell'elemento i-mo la somma dei valori della riga i-ma della matrice,
 * individui l'indice di riga di somma minima e l'indice di riga di somma massima e scambi gli elementi delle due righe,
 * salvando in un file di testo la matrice così modificata.
 * Si assuma che il file di testo contenente la matrice abbia sulla prima riga il valore della dimensione di riga e di colonna della matrice quadrata 
 * e che gli elementi della matrice si trovino sulle righe successive.
 * Per completare il programma, si richiede la realizzazione di quattro funzioni:
 * - una funzione che riceva in ingresso una matrice quadrata e la sua dimensione di riga e di colonna e restituisca l'array contenente le somme di riga
 * - una funzione che riceva in ingresso un array e la sua dimensione e restituisca in uscita l'indice dell'elemento massimo e l'indice dell'elemento minimo
 * - una funzione che riceva in ingresso una matrice quadrata, la sua dimensione di riga e di colonna e due indici h e k e scambi i valori della riga h-ma e della riga k-ma
 * - una funzione che scriva su file di testo gli elementi della matrice modificata
 * Delle funzioni richieste è fornito il prototipo in accordo al quale va realizzato il codice.
 
 
 * Ad esempio nel caso della seguente matrice di interi:

3 1 1 2 0
2 0 0 1 2
1 1 1 1 2
6 2 2 0 2 
6 2 1 0 1
 
 * la funzione dovrebbe riempire il vettore v come segue:
 
 v = (7,5,6,12,10)

 * L'indice della riga con la somma massima è 3, mentre l'indice della riga con la somma minima è 1.
 * La matrice che si ottiene a valle dello scambio di righe richiesto è quindi:

3 1 1 2 0
6 2 2 0 2 
1 1 1 1 2
2 0 0 1 2
6 2 1 0 1

 * Il file di testo contenente la matrice da leggere potrebbe avere la seguente organizzazione:
5
3 1 1 2 0
2 0 0 1 2
1 1 1 1 2
6 2 2 0 2 
6 2 1 0 1
 * 
 * Un esempio di esecuzione e':
 * 
Inserire nome file: matrice.txt
matrice letta:
3 1 1 2 0 
2 0 0 1 2 
1 1 1 1 2 
6 2 2 0 2 
6 2 1 0 1 


Vettore delle somme:
7 5 6 12 10 

L'indice della riga con somma minima e' 1
L'indice della riga con somma massima e' 3

Matrice dopo lo scambio delle righe:
3 1 1 2 0 
6 2 2 0 2 
1 1 1 1 2 
2 0 0 1 2 
6 2 1 0 1 

Inserire nome file: matout.txt

Matrice salvata

 */

#include <stdio.h>
#include <stdlib.h>

#define DIM 100
#define NCAR 64

FILE *apriFile(char mode[]);
void StampaVettore(int a[], int n); 
int LeggiMatrice(FILE *fp, int mat[][DIM]);
void StampaMatrice(int mat[][DIM], int n);
void RiempiVettoreSomme(int m[][DIM], int n, int v[]);
void CercaMinMax(int v[], int n, int *imin, int *imax);
void ScambiaRighe(int m[][DIM], int n, int h, int k);
void ScriviMatrice(FILE *fp, int m[][DIM], int n);

int main() {
    FILE *fp;
    int mat[DIM][DIM], vet[DIM];
    int n, indmax, indmin;

    /* Apre il file di input */
    fp = apriFile("r");

    /* Legge la matrice da file */
    n = LeggiMatrice(fp, mat);

    /* Chiude il file */
    fclose(fp);

    /* Stampa la matrice a video */
    printf("matrice letta:\n");
    StampaMatrice(mat, n);
    printf("\n");

    /* Costruisce il nuovo array e lo stampa a video */
    RiempiVettoreSomme(mat, n, vet);
    printf("\nVettore delle somme:\n");
    StampaVettore(vet, n);
    printf("\n");

    /* Determina gli indici delle righe della matrice di somma minima e di somma massima */
    CercaMinMax(vet, n, &indmin, &indmax);

    /* Stampa gli indici ottenuti */
    printf("L'indice della riga con somma minima e' %d\n", indmin);
    printf("L'indice della riga con somma massima e' %d\n", indmax);

    /* Scambia gli elementi delle due righe della matrice */
    ScambiaRighe(mat, n, indmin, indmax);

    /* Stampa a video la matrice modificata */
    printf("\nMatrice dopo lo scambio delle righe:\n");
    StampaMatrice(mat, n);
    printf("\n");

    /* Salva su file la matrice modificata */
    /* Apre il file di output */
    fp = apriFile("w");

    /* Legge la matrice da file */
    ScriviMatrice(fp, mat, n);

    /* Chiude il file */
    fclose(fp);
    
    printf("\nMatrice salvata");
    
    return EXIT_SUCCESS;
}


/*
 La funzione ApriFile apre il file il cui nome e' fornito in input
 dall'utente nella modalità specificata dal parametro formale mode
 e restituisce il puntatore al file
 */
FILE *apriFile(char mode[]) {
    char nome_file[NCAR];
    FILE *fptr;

    printf("Inserire nome file: ");
    scanf("%s", nome_file);
    if ((fptr = fopen(nome_file, mode)) == NULL) {
        printf("Errore apertura file %s.\n", nome_file);
        exit(EXIT_FAILURE);
    }

    return fptr;
}

/* La funzione StampaVettore riceve come parametro un array a e la sua dimensione n
 * e lo stampa a video */

void StampaVettore(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

}

/* 
 * La funzione LeggiMatrice riceve in ingresso il puntatore al file e la matrice,
 * apre il file e legge la dimensione della matrice quadtrata e successivamente
 * gli elementi della matrice. La funzione restituisce la dimensione della matrice
 */
int LeggiMatrice(FILE *fpin, int mat[][DIM]) {

    int dimensione;
    //leggo la dimensione della matrice
    fscanf(fpin, "%d\n", &dimensione);
    printf("Dimensione Matrice[%d]\n", dimensione);

    while(!feof(fpin)){
        for(int rows=0; rows<dimensione; rows++){
            for(int cols = 0; cols<dimensione; cols++){
                fscanf(fpin, "%d ", &mat[rows][cols]);
            }
            fscanf(fpin, "\n");
        }
    }
   return dimensione;
    /* Funzione da completare */
}

/*
 * La funzione StampaMatrice riceve in ingresso il puntatore alla matrice e la sua
 * dimensione. Stampa a video i valori della matrice.
 */
void StampaMatrice(int m[][DIM], int n) {
     printf("--------Matrice--------\n");
        for(int i = 0; i < n; i++){
            for(int j = 0; j<n; j++){
                printf("%d ", m[i][j]);
            }
            printf("\n");
        }
    }

/* 
 * La funzione RiempiVettoreSomme riceve in ingresso la matrice a e la sua dimensione n.
 * Per ogni riga di indice i della matrice somma i valori degli elementi e salva il valore 
 * nell'elemento i-mo del vettore v, passato come ulteriore parametro.
 */
void RiempiVettoreSomme(int a[][DIM], int n, int v[]) {
    
    int i = 0;

    for(int rows = 0; rows< n; rows++){
        for(int cols = 0; cols<n; cols++){
            v[i] += a[rows][cols]; 
        }
        i++;
    }
}

/* 
 * La funzione CercaMinMax riceve in ingresso il vettore v e la sua dimensione n
 * e ricerca l'indice del valore minimo e l'indice del valore massimo che vengono 
 * restituiti tramite i parametri imin e imax, rispettivamente.
 */
void CercaMinMax(int v[], int n, int *imin, int *imax) {

    *imax = v[0];
    *imin = v[0];

    //cerco MAX
    for(int i = 0; i < n; i++){
        if( v[i] > *imax ){
            *imax = i;
        }
    }
    //cerco MIN
    for(int j = 0; j < n; j++){
        if( v[j] < *imin ){
            *imin = j;
        }
    }
}

/* 
 * La funzione ScambiaRighe riceve in ingresso la matrice quadrata m, la sua 
 * dimensione di riga e di colonna n e due indici h e k. 
 * Scambia gli elementi della riga di indice h e gli elementi della riga di 
 * indice k della matrice.
 */

void ScambiaRighe(int m[][DIM], int n, int h, int k) {

    int vett_temp; 
    
    printf("H = %d\nK = %d\n",h,k);
        for(int i = 0; i < n; i++){

            vett_temp = m[h][i]; 
            m[h][i] = m[k][i];      
            m[k][i] = vett_temp;    

        }
}

/* 
 * La funzione ScriviMatrice riceve in ingresso il puntatore al file, la matrice quadrata 
 * e la sua dimensione di riga e di colonna. Apre il file e scrive sulla prima riga la 
 * dimensione della matrice quadrata. Successivamente scrive su file gli elementi della matrice.
 */
void ScriviMatrice(FILE *fpin, int mat[][DIM], int n) {
    
    fprintf(fpin, "%d\n", n);

    for(int i = 0; i < n; i++){
        for(int k = 0; k<n; k++){
            fprintf(fpin, "%d ", mat[i][k]);
        }
        fprintf(fpin, "\n");
    }
}


