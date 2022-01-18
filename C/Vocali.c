//-----------------------------------------------
//programma che conta le vocali - Samuele Stabile
//-----------------------------------------------
#include <stdio.h>

int main(){

char s[30];
char ch;
int i = 0;
int vocali = 0;

printf("Stringa --> ");

while( (ch = getchar()) != '\n'){ //questa riga serve ad assorbire ogni carattere fino al tasto invio
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
        vocali++;   //questo if controlla se ci sono vocali maiuscole o minuscolo, contandole incrementando un contatore
    }
    s[i] = ch;  //passo il char assorbito nella stringa di cella [i] e dopo incremento i
    i++;
}

s[i++] = '\0'; //aggiungo il carattere terminatore dopo che ho assorbito la stringa

//stampo
printf("%s", s);
printf("\n Le vocali sono --> [%d]", vocali);

}