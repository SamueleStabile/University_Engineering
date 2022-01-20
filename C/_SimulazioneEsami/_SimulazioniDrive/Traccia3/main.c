/*
 PROVA PRATICA DI FONDAMENTI DI INFORMATICA
 
 Si scriva un programma C il quale, lette da un file un insieme di sequenze di caratteri in formato 
 compresso o non compresso, nel primo caso espande le sequenze, mentre nel secondo le comprime.
 
 Ad esempio, la sequenza non compressa aaabaaaaccccc verra' compressa in 3a1b4a5c, mentre la sequenza
 compressa 7v5c2b verra' espansa in vvvvvvvcccccbb.
 
 Si assuma che
 a) ogni riga del file contenga una ed una sola sequenza da comprimere o decomprimere;
 b) la scelta di comprimere o decomprimere sia demandata all'utente che conosce a priori l'operazione
    corretta da effettuare.
 
 Il candidato implementi le funzioni mancanti, secondo le modalità descritte nel commento
 alle funzioni e rispettando i vincoli di progetto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/* Costanti */
#define MAXSEQ 100
#define NCAR 100

/* Prototipi */
FILE *ApriFile(char *);
int Leggi_Sequenze(FILE *, char [][NCAR]);
void Comprimi(char [][NCAR], char [][NCAR], int);
void Decomprimi(char [][NCAR], char [][NCAR], int);
void Stampa_Risultato(FILE *, char [][NCAR], int);
void Stampa(char [][NCAR], int);

/* Funzione Main */
int main ()
{
	FILE *fpin, *fpout;
	char scelta, sequenze[MAXSEQ][NCAR], zip_unzip[MAXSEQ][NCAR];
	int n;
	
	do{
		printf("Scegli cosa fare:\n");
		printf("c - Comprimere:\n");
		printf("d - Decomprimere:\n");
		scanf("%c", &scelta);
		getchar();
	} while (scelta != 'c' && scelta != 'd');
	
	if( scelta == 'c' ) {
		fpin = ApriFile("r");
	
		if((n = Leggi_Sequenze(fpin, sequenze)) == 0 ) {
			printf("Nessuna operazione da effettuare.\n");
			return EXIT_SUCCESS;
		}
		Stampa(sequenze, n);
		
		Comprimi(sequenze, zip_unzip, n);
		Stampa(zip_unzip, n);
	
		fclose(fpin);
	}
	else {
		fpin = ApriFile("r");
		
		if((n = Leggi_Sequenze(fpin, sequenze)) == 0 ) {
			printf("Nessuna operazione da effettuare.\n");
			return EXIT_SUCCESS;
		}
		Stampa(sequenze, n);
		
		Decomprimi(sequenze, zip_unzip, n);
		Stampa(zip_unzip, n);
		
		fclose(fpin);
	}
	
	fpout = ApriFile("w");
	
	Stampa_Risultato(fpout, zip_unzip, n);
	
	fclose(fpout);
	
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
 La funzione Leggi_Sequenze prende in ingresso il puntatore al file
 di dati in input e la matrice di caratteri destinata a contenere le sequenze
 da immagazzinare. Legge le sequenze e restituisce il numero di sequenze lette.
*/
int Leggi_Sequenze(FILE *fpin, char str[][NCAR])
{
    /* FUNZIONE DA COMPLETARE */
}

/*
 La funzione Comprimi prende in ingresso la matrice di char contenente le sequeze da comprimere,
 la matrice di sequenze compresse e il loro numero. Comprime le sequenze, secondo le modalita' 
 descritte, immagazzinandole nella corrispondente matrice di char
 */
void Comprimi(char str[][NCAR], char zip[][NCAR], int n)
{
    /* FUNZIONE DA COMPLETARE */
}

/*
 La funzione Decomprimi prende in ingresso la matrice di char contenente le sequeze da decomprimere,
 la matrice di sequenze decompresse e il loro numero. Decomprime le sequenze, secondo le modalita'
 descritte, immagazzinandole nella corrispondente matrice di char
 */
void Decomprimi(char str[][NCAR], char unzip[][NCAR], int n)
{
    /* FUNZIONE DA COMPLETARE */
}

/*
 La funzione Stampa_Operazioni prende in ingresso la matrice di char contenente le sequenze
 e il loro numero. Stampa a video le sequenze.
 */
void Stampa(char str[][NCAR], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		printf("%s\n", str[i]);
}

/*
 La funzione Stampa_Risultato prende in ingresso il puntatore al file di output,
 la matrice di char contenete le sequenze e il loro numero.
 Stampa le sequenze nel file di output.
 */
void Stampa_Risultato(FILE *fp, char str[][NCAR], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		fprintf(fp, "%s\n", str[i]);
}