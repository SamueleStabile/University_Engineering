#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int i;
    char ch;

    printf("Inserisci numero: ");
    scanf("%d", &i);

    while(getchar() != '\n'); //pulisco il buffer togliendo tutti gli spazi vuoti

    printf("Inserisci carattere: ");
    scanf("%c", &ch);

    printf("\n%c", ch);
    
    return (0);

}