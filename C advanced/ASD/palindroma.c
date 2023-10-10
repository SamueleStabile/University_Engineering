#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindroma(char *string, int n);

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

    int n = strlen(string);

     if(palindroma(string, n)){ //se Palindroma() restituisce 1 | n-1 per togliere il carattere terminatore /0
        printf("La Stringa [%s] e' palindroma\n", string);
    }else{                      //se Palidnroma() restituisce 0
        printf("[Non Palindroma]\n");
    }
}

int palindroma(char *string, int n){

    if(n==1 || n==0){ //caso base
        return 1; 
    }

    if(string[0] != string[n-1]){
        //La stringa non é Palindroma
        return 0;
    }

    return palindroma(string+1,n-2); //escludo i due caratteri confrontati e punto il nuovo primo di parola
}
    
