#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lunghezza(char *string);

int main(int argc, char **argv){
    
    char string[100];
    if (argc == 2)
    {
        strcpy(string, argv[1]);
        printf("%s\n", string);
    }else{
        printf("Inserire Parola in riga di comando");
        return 1;   
    }

    printf("\nLUNGHEZZA: [%d]\n", lunghezza(string));
}

int lunghezza(char *string){

    if (*string == '\0') //caso base
        return 0;

    return 1 + lunghezza(string+1); //string + 1 scorre la stringa, "1 + "si annida come contatore
    
}