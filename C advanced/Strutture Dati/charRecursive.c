#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

int lunghezza(char *string);

int main(int argc, char** argv){
char s[MAX] = "";

strcpy(s, argv[1]);
printf("stringa: [%s]\n", s);
printf("lunghezza: [%d]\n",lunghezza(s));
}

int lunghezza(char *string){
    if (string[0] == '\0'){
        return 0;
    }
    return 1+lunghezza(string+1);
}


