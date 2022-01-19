/*
 * Completare il programma C che, dato un file di testo contente una sequenza di stringhe,
 * determini quante occorrenze consecutive  di due caratteri alfabetici (doppie) appaiono nelle parole del testo e 
 * scriva in un nuovo file, il numero di occorrenze di doppie contenuto in ogni parola del file di testo.

 
Esempio di un file di input:
All'alba del terzo millennio le strategie politiche sullo sviluppo agricolo ruotano attorno al concetto di Climate Smart Agriculture.


Un esempio di esecuzione e':

Digitare il nome del file di input: in.txt
Digitare il nome del file di output: out.txt
 
Dopo l'esecuzione del programma, il file out.txt conterrà:

All'alba: 1
del: 0
terzo: 0
millennio: 2
le: 0
strategie: 0
politiche: 0
sullo: 1
sviluppo: 1
agricolo: 0
ruotano: 0
attorno: 1
al: 0
concetto: 1
di: 0
Climate: 0
Smart: 0
Agriculture.: 0
 * 
 */



#include <stdio.h>
#include <stdlib.h>

#define NCAR 80
#define NPAR 20


FILE *ApriFile(char mode[]);
int Doppie(char str[]);
void ScriviRisultato(FILE *fpout, char string[], int n_doppie);

int main(int argc, char** argv) {
    FILE *fp1, *fp2;
    int n_occ;
    char str[NPAR];

    fp1 = ApriFile("r");
    fp2 = ApriFile("w");
    while (fscanf(fp1, "%s", str) != EOF) {
        n_occ = Doppie(str);
        ScriviRisultato(fp2, str, n_occ);
    }
    fclose(fp1);
    fclose(fp2);

    return (EXIT_SUCCESS);
}

/*
 La funzione ApriFile apre il file il cui nome e' fornito in input
 dall'utente nella modalità specificata dal parametro formale mode
 e ritorna il puntatore al file
 */
FILE *ApriFile(char* mode) {
    /* FUNZIONE DA COMPLETARE*/
}

/*
 * La funzione Doppie prende in input una stringa e restituisce 
 * il numero di occorrenze di doppie contenute nella stringa.
 */
int Doppie(char str[]) {
    /* FUNZIONE DA COMPLETARE*/
}


/*
 La funzione ScriviRisultato scrive su file l'ouput come descritto nella traccia.
 * Ha i parametri: nome del file su cui salvare il risultato, la stringa letta e 
 * il numero di occorrenze di doppie che appaiono  nella stringa
 * 
 */
void ScriviRisultato(FILE *fpout, char string[], int n_doppie) {
    /* FUNZIONE DA COMPLETARE*/
}
