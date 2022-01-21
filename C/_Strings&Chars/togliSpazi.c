#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100

int main() {
    char s[SIZE];
    char f[SIZE];
    int i=0;
    int j;
    int k=0;



    //---------------------------------------------------------------------
    //Questo programma rimuove gli spazi vuoti in una stringa
    printf("\n Inserisci una frase: ");

    for(i =0; ( s[i] = getchar() ) != '\n'; i++){} //assorbo stringa

    for(i = 0 ; s[i] != '\0' ; i++){ //scorro la stringa finché non finisce

        if(s[i] != ' '){ //trasferisco il singolo char in un altro vettore

            f[k] = s[i];
            k++;    
        }
    }

    f[k--] = '\0';
    printf("%s",f);
    //---------------------------------------------------------------------

    return 0;
}