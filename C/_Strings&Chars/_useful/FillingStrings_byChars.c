#include <stdio.h>
#define LENGTH 50 //definiamo la lunghezza massima della stringa

//Questo metodo é un alternativa alla classica "scanf("%s", string)"

int main(){
char ch;
char string[LENGTH+1]; //quel +1 sta per il carattere terminatore '\0' che dovremmo aggiungere noi alla fine
int i = 0;

    //Alternativa al while
    //for( i = 0; (( stringadimerda[i] = getchar()) != '\n'); i++ ){} 

    while(( ch = getchar()) != '\n'){   //getchar() é la funzione che permette di assorbire un singolo carattere
    string[i] = ch;                     //con questo ciclo continuiamo ad assorbire i char finché l'utente non preme invio ('\n')
    i++;                                      
    }

    string[i++] = '\0'; //TERMINA SEMPRE LA STRINGA con il terminatore dopo averla riempita!

}