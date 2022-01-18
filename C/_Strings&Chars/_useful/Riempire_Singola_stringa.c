#include <stdio.h>
#include <stdlib.h>
#define length 20

int main(void) {
    
    char st[length+1] = "Marunell";
    printf("Stringa: %s\n" , st);   //da notare come non dobbiamo mettere la "&" vicino ad "st" poiché é una stringa!

    return (0);

}