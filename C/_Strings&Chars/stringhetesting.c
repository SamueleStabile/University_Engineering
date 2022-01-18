#include <stdio.h>
#include <string.h>

int main(){

    system("cls");
    char stringadimerda[20];
    char chardimerda;
    int i = 0;
    printf("Inserisci una stringa: ");

    //for( i = 0; (( stringadimerda[i] = getchar()) != '\n'); i++ ){}

    //printf("Hai inserito la stringa: %s", s);

    while(( chardimerda = getchar()) != '\n'){
    stringadimerda[i] = chardimerda; 
    i++; 
    }

    stringadimerda[i++] = '\0'; //TERMINA SEMPRE LA STRINGA FROCIO

    printf("Hai inserito la stringa: %s ", stringadimerda);

}