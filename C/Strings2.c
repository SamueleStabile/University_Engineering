#include <stdio.h>
#include <stdlib.h>
#define length 20

int main(void) {
    
    char parola[24] = "Samuele"; 
    int i=0;

    while(parola[i] != '\0'){
        printf("%c \n", parola[i]); 
        i++;
    }

    return (0);

}