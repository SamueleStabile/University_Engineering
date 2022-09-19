#include <stdio.h>
#include <stdlib.h>
#define length 20

int main(void) {
    
    char st[length+1];
    printf("Inserisci Stringa: ");
    scanf("%s", st);    //da notare come non dobbiamo mettere la "&" vicino ad "st" poiché é una stringa!
    printf("Stringa: %s\n" , st);   
    return (0);

}