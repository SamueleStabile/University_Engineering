/*
 PROVA PRATICA DI FONDAMENTI DI INFORMATICA
 
 Si scriva un programma C, il quale letto un testo di un SMS da un file comprime le parole effettuando delle 
 sostituzioni che permettono una piu` veloce scrittura del testo. Per esempio, la sequenza "per" viene 
 sostituita da "x", ch da k, e cosi' via.
 
 Si assuma che
 
 a) il testo sia scritto su diverse righe del file di input;
 b) venga letto tutto il testo, spazi compresi;
 c) le sostituzioni siano scritte in un file con una sostituzione per riga.
 
 Un esempio di file di input per l'SMS e' il seguente:
 
 Quello che devi fare per superare l'esame
 non e' chiedere aiuto a Dio o alla fortuna, ma
 fare in modo che il programma computi!
 
 Mentre il contenuto del file di sostituzioni e':
 
 per x
 ch k
 
 Il contenuto del file di output sara':
 
 Quello ke devi fare x superare l'esame
 non e' kiedere aiuto a Dio o alla fortuna, ma
 fare in modo ke il programma computi!
 
 Il candidato implementi le seguenti funzioni mancanti, secondo le modalità descritte nel commento
 alle funzioni e rispettando i seguenti vincoli di progetto. 
  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Costanti */
#define MAXDIM 100
#define NCAR 100

/* Prototipi */
FILE *ApriFile(char *);
int Leggi_Sms(FILE *, char [][NCAR]);
int Leggi_Sostituzioni(FILE *, char [][NCAR], char [][NCAR]);
void CodificaSms(char [][NCAR], char [][NCAR], char [][NCAR], char [][NCAR], int, int);
void Stampa_Sms(FILE *, char [][NCAR], int);
void Stampa(char [][NCAR], int);

/* Funzione Main */
int main ()
{
    FILE *fpin1, *fpin2, *fpout;
    char sms_in[MAXDIM][NCAR], sms_out[MAXDIM][NCAR], testo[MAXDIM][NCAR], codifica[MAXDIM][NCAR];
    int n, m;
    
    fpin1 = ApriFile("r");
    
    if((n = Leggi_Sms(fpin1, sms_in)) == 0 ) {
        printf("Nessuna sms da codificare.\n");
        return EXIT_SUCCESS;
    }
    
    fclose(fpin1);
    
    fpin2 = ApriFile("r");
    
    if((m = Leggi_Sostituzioni(fpin2, testo, codifica)) == 0 ) {
        printf("Nessuna sostituzione da effettuare.\n");
        return EXIT_SUCCESS;
    }
    
    fclose(fpin2);
    
    Stampa(sms_in, n);
    
    CodificaSms(sms_in, sms_out, testo, codifica, n, m);
    Stampa(sms_out, n);
    
    fpout = ApriFile("w");
    
    Stampa_Sms(fpout, sms_out, n);
    
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
 La funzione Leggi_Sms prende in ingresso il puntatore al file
 di dati in input e la matrice di caratteri destinata a contenere il testo
 da immagazzinare. Legge il testo, omettendo e restituisce il numero di linee lette.
 */
int Leggi_Sms(FILE *fpin, char str[][NCAR])
{
    /* FUNZIONE DA COMPLETARE */
}

/*
 * La funzione Leggi_Sostituzioni prende in ingresso il puntatore al file
 di dati, la matrice di caratteri destinata a contenere il testo da sostituire 
 e la matrice di caratteri destinata a contenere il testo con cui sostituire.
 Legge da file sia il testo da sostituire sia il testo con cui sostituire.s
 */
int Leggi_Sostituzioni(FILE *fpin, char testo[][NCAR], char codifica[][NCAR])
{
    /* FUNZIONE DA COMPLETARE */
}

/*
 La funzione CodificaSms prende in ingresso la matrice di char contenente il testo dell'SMS,
 la matrice di char destinata a contenere il testo codificato, la matrice di char con il testo
 da sostituire, la matrice di caratteri con il testo con cui sostituire, il numero di linee del
 testo e il numero di sostituzioni. Codifica l'SMS riga per riga, cercando il testo da sostituire e 
 rimpiazzandolo con la codifica.
 */
void CodificaSms(char sms_in[][NCAR], char sms_out[][NCAR], char testo[][NCAR], char codifica[][NCAR], int n, int m)
{
	/* FUNZIONE DA COMPLETARE */
}

/*
 La funzione Stampa la matrice di char contenente il testo 
 e il numero di linee del testo. Stampa il testo a video.
 */
void Stampa(char sms[][NCAR], int n) {
    int i;
                    
    for(i = 0; i < n; i++)
        printf("%s\n", sms[i]);
}

/*
 La funzione Stampa_Sms prende in ingresso il puntatore al file di output,
 la matrice di char contenente il testo e il numero di linee del testo.
 Stampa il testo nel file di output.
 */
void Stampa_Sms(FILE *fp, char sms[][NCAR], int n) {
    int i;
                    
    for(i = 0; i < n; i++)
        fprintf(fp, "%s\n", sms[i]);
}