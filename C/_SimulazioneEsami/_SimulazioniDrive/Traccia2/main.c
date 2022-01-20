/*
 PROVA PRATICA DI FONDAMENTI DI INFORMATICA
 
 Si scriva un programma C il quale, lette da un file coppie di stringhe composte dai soli caratteri
 ’0’ e ’1’ (oltre ovviamente al terminatore di stringa), ne calcoli la somma in binario.
 
 Si assuma che
 a) ogni riga del file contenga una ed una sola coppia di stringhe da sommare;
 b) la lunghezza delle stringhe possa essere differente;
 b) le somme debbano essere scritte nello stesso modo in stringhe e salvate in un file;
 c) accanto alla stringa risultato si debba inserire un valore booleano che registra
    l’eventuale condizione di overflow (0: nessun overflow, 1: c’`e stato overflow) risultante
    dall'operazione di somma.
 
 Un esempio di file di input e' il seguente:
 
 1111111 01
 1110 010011
 000001 101010101
 
 Mentre il contenuto del file di output a fine esecuzione sara':
 
 0000000 overflow 1
 100001 overflow 0
 101010110 overflow 0
 
 Il candidato implementi le funzioni mancanti, secondo le modalità descritte nel commento
 alle funzioni, rispettando i vincoli di progetto.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Costanti */
#define MAXNUM 100
#define NCAR 100

/* Prototipi */
void Esegui_Somme(char [][NCAR], char [][NCAR], char [][NCAR], char [], int);
void Shift_Stringa(char [], int, int);
int Leggi_StringheBinarie(FILE *, char [][NCAR], char [][NCAR]);
FILE *ApriFile(char *);
void Stampa_Somme(FILE *, char [][NCAR], char [], int);

/* Funzione Main */
int main ()
{
	FILE *fpin, *fpout;
	char stringaA[MAXNUM][NCAR], stringaB[MAXNUM][NCAR];
	char somma[MAXNUM][NCAR], overflow[MAXNUM];
	int n;
	
	fpin = ApriFile("r");
	
	if((n = Leggi_StringheBinarie(fpin, stringaA, stringaB)) == 0 ) {
		printf("Nessun numero da convertire.\n");
		return EXIT_SUCCESS;
	}
	
	fclose (fpin);
	
	Esegui_Somme(stringaA, stringaB, somma, overflow, n);
	
	fpout = ApriFile("w");
	
	Stampa_Somme(fpout, somma, overflow, n);
	
	fclose (fpout);
	
	return EXIT_SUCCESS;
}

/*
 La funzione ApriFile apre il file il cu nome e' specificato
 dall'utente nella modilità specificata dal parametro formale mode
 e ritorna il puntatore al file
 */
FILE *ApriFile(char* mode)
{
	char nome_file[NCAR];
	FILE *fptr;
	
	printf("Inserire nome file: ");
	scanf("%s", nome_file);
	if((fptr = fopen(nome_file, mode)) == NULL) {
		printf("Errore apertura file %s.\n", nome_file);
		exit(EXIT_FAILURE);
	}
	
	return fptr;
}

/*
 La funzione Leggi_StringheBinarie prende in ingresso il puntatore al file
 di dati in input e le matrici di caratteri destinate a contenere le stringhe
 da immagazzinare. Legge le stringhe e restituisce il numero di coppie lette.
 */
int Leggi_StringheBinarie(FILE *fpin, char strA[][NCAR], char strB[][NCAR])
{
    /* FUNZIONE DA COMPLETARE */
}

/* La funzione Shift_Stringa prende in ingresso una stringa, la lunghezza della stringa 
 e la nuova lunghezza della stringa (maggiore di quella attuale). Sposta verso destra
 la stringa inserendo a sinistra il carattere '0'.
 */
void Shift_Stringa(char str[], int n, int m)
{
    /* FUNZIONE DA COMPLETARE */
}

/*
 La funzione Esegui_Somme prende in ingresso le matrice di char contenente le stringhe da somare, la
 matrice di char destinata a contenere i risultati di ogni somma, il vettore di char destinato a 
 contenere il valore di overflow (0 o 1) e il numero di somme (righe delle matrici) da effettuare. 
 Effettua le somme tra le coppie di stringhe (si deve effettuare una conversione da ascii a numerico), 
 immagazzina i risultati nella matrice delle somme e l'overflow nel corrispondente vettore di char.
 
 SUGGERIMENTO: Poichè le stringhe da sommare possono essere di lunghezza differente si porti la stringa
 più piccola alla stessa lunghezza di quella più lunga facendo uso della funzione Shift_Stringa.
 */
void Esegui_Somme(char strA[][NCAR], char strB[][NCAR], char sum[][NCAR], char of[], int n)
{
    /* FUNZIONE DA COMPLETARE */
}

/*
 La funzione Stampa_Somme prende in ingresso il puntatore al file di output,
 la matrice delle somme contenente i risultati, il vettore di overflow e il numero di risultati.
 Stampa i risultati e l'overflow nel file di output.
 */
void Stampa_Somme(FILE *fp, char sum[][NCAR], char of[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		fprintf(fp, "%s overflow %c\n", sum[i], of[i]);
}