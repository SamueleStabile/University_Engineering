#include <stdio.h>

int main(){

    //di solito dopo un inseriemento di una stringa il terminale ("buffer") rimane sporco di spazi vuoti
    //per questo utilizziamo questa funzione per scorrere tutti quegli spazi vuoti, finché non andiamo accapo

    while(getchar() != '\n'); //pulisco il buffer togliendo tutti gli spazi vuoti

}