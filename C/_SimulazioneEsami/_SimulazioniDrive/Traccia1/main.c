/*
 PROVA PRATICA DI FONDAMENTI DI INFORMATICA

 Si scriva un programma C il quale lette da un file un insieme di operazioni aritmetiche binarie
 (con 2 operandi) fra numeri interi esegua le corripodenti operazioni e scriva su un file i
 risultati, uno per riga.
 
 Si assuma che
 
 a) ogni riga del file contenga una ed una sola operazione;
 b) il formato dell'operazione sia: operando1 op operando2, con op uguale a +, -, * o /;
 c) le operazioni siano lette come stringhe e immagazzinate in una matrice di caratteri,
    dove ogni riga contiene la corrispondente linea di testo contenente l'operazione;
 d) tra gli operandi e l’operatore possa essere presente un numero arbitrario di spazi bianchi.
 
 Un esempio di file di input e' il seguente:
 
 3    + 9
        4   *        2
     123     -     27
 
 Mentre il contenuto del file di output sara':
 
 12
 8
 96
 
 Il candidato implementi le funzioni mancanti, secondo le modalità descritte nel commento
 alle funzioni, rispettando i vincoli di progetto.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/* Costanti */
#define MAXOP 100
#define NCAR 100

/* Prototipi */
FILE *ApriFile(char *);
int Leggi_Operazioni (FILE *, char [][NCAR]);
void Esegui_Operazioni(char [][NCAR], int [], int);
void Stampa_Risultato(FILE *, int [], int);
void Stampa_Operazioni(char [][NCAR], int);

/* Funzione Main */
int main ()
{
	FILE *fpin, *fpout;
	char operazioni[MAXOP][NCAR];
	int risultati[MAXOP];
	int n;
	
	fpin = ApriFile("r");
	
	if((n = Leggi_Operazioni(fpin, operazioni)) == 0 ) {
		printf("Nessuna operazione da effettuare.\n");
		return EXIT_SUCCESS;
	}
	
	fclose(fpin);
	
	Stampa_Operazioni(operazioni, n);
	Esegui_Operazioni(operazioni, risultati, n);
	
	fpout = ApriFile("w");
	
	Stampa_Risultato(fpout, risultati, n);
	
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
	FILE* fptr;
	char filename[NCAR+1];


	printf("Inserisci Nome File: ");
	scanf("%s", filename);

	if((fptr = fopen(filename, mode)) == NULL){
		printf("Error to open file!\n");
	}

	return fptr;

}

/*
 La funzione Leggi_Operazioni prende in ingresso il puntatore al file
 di dati in input e la matrice di caratteri destinata a contenere le operazioni
 da immagazzinare. Legge le operazioni, omettendo gli spazi bianchi, e restituisce
 il numero di operazioni lette.
 */
int Leggi_Operazioni(FILE *fpin, char str[][NCAR])
{
	char ch;
	int i = 0;
	int j = 0;
	
	    while(!feof(fpin)){	
			ch = fgetc(fpin);
				if(ch != ' ' && ch != '\n'){
					str[i][j] = ch;
					j++;
				} else if (ch == '\n'){
					i++;
					j = 0;
				}
		}
	return i;
	}

/*
 La funzione Esegui_Operazioni prende in ingresso la matrice di char contenente le operazioni, il
 vettore di interi destinato a contenere i risultati di ogni operazione e il numero di operazioni (righe
 della matrice) da effettuare. Effettua le operazioni, determinando il primo operando, l'operazione 
 e il secondo operando (si deve effettuare una conversione da ascii a numerico) e immagazzina il risultato
 nel vettore dei risultati.
 // 
 */
void Esegui_Operazioni(char str[][NCAR], int r[], int n)
{
	//conversione 
	int i, q, p, j, a, l;
    i = p = a = 0;
    int temp, tipo;
    int vet[MAXOP];
    int op1, op2;
    char ch;

			for(l=0;l<n;l++){
				op1 = op2 = 0;
				q = p = 0;
				temp = 0;
				ch=str[i][q];

				while(ch!='+' && ch!='-' && ch!='*' && ch!='/'){
					vet[p] = ch-48;
					p++;
					q++;
					ch=str[i][q];
				}
				temp=p-1;
			for (j=0; j<p; j++){
				op1 = op1 + (vet[j]*pow(10,temp));
				temp = temp -1;
			}
            printf("%d\n",op1);

			if(ch=='+'){
				tipo=0;
			} else if(ch=='-'){
				tipo=1;
			} else if(ch=='*'){
				tipo=2;
			} else if(ch=='/'){
				tipo=3;
			}

			q++;
			ch=str[i][q];
			p=0;

			while(ch!='\0'){
				vet[p] = ch-48;
				p++;
				q++;
				ch=str[i][q];
			}
            temp=p-1;
		for (j=0; j<p; j++){
			op2=op2 + (vet[j]*pow(10,temp));
			temp = temp -1;
		}
			printf("%d\n",op2);
			if(tipo==0){
				r[a]=op1+op2;
			} else if(tipo==1){
				r[a]=op1-op2;
			} else if(tipo==2){
				r[a]=op1*op2;
			} else if(tipo==3){
				r[a]=op1/op2;
			}
			printf("%d\n", r[a]);
			a++;
			i++;
			}

	
	
	
	/*
		if(str[0][0] != '\n'){
			while(str[0][0] != '+' && str[0][0] != '-' && str[0][0] != '*' && str[0][0] != '/'){
				temp = str[0][0] - '0';
				numero[i] = (numero[i]*10) + temp;
				printf("%d", numero[i]);
				i++;
			} 
		}
	*/
	/*char a = '4';
	int ia = a - '0';*/
}

/*
 La funzione Stampa_Operazioni prende in ingresso la matrice di char contenente le operazioni
 e il numero di operazioni. Stampa a video le operazioni.
 */
void Stampa_Operazioni(char ops[][NCAR], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		printf("%s\n", ops[i]);
}

/*
 La funzione Stampa_Operazioni prende in ingresso il puntatore al file di output, 
 il vettore di interi contenente i risultati e il numero di risultati. 
 Stampa i risultati nel file di output uno per riga.
 */
void Stampa_Risultato(FILE *fp, int r[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		fprintf(fp, "%d\n", r[i]);
}