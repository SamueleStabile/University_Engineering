#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <math.h>
#include <string.h>


typedef struct {
    char *stringa;
    char vocale;
    int result;
}TParam;

void *calcola_conteggio(void*args){
    
    TParam *p = (TParam*)args;
    
    p->result = 0;
    
    for(int i = 0; i < strlen(p->stringa); i++){
        if(p->stringa[i] == p->vocale){
            p->result++;
        }    
    }
    return NULL;
}
int main(int argc, char*argv[]){
    
    pthread_t tid[5];
    TParam targs[5];
    
    if(argc != 2){
        printf("Inserisci una sola stringa");
    }
    
    char s[100];
    strcpy(s,argv[1]);
    printf("Leggo: [%s]\n", s);
    
    char arr_vocali[10] = "aeiou";    
    printf("Vocali: [%s]\n\n", arr_vocali);
    
     
    for(int i=0;i<5;i++){
        targs[i].vocale = arr_vocali[i];
        targs[i].stringa = s;
        //printf("Vocale: [%c]\n", targs[i].vocale);
        //printf("Stringa: [%s]\n", targs[i].stringa);
    }
    
    for(int i=0; i<5; i++){
        if(pthread_create(&tid[i], NULL, calcola_conteggio, &targs[i] ) != 0 ){
            printf("Errore pthread_create");
            return 1;
        }else{
            pthread_join(tid[i], NULL);
        }
    }
    
    for(int i=0; i < 5 ; i++){
        printf("La lettera [%c] é presente [%d] volte. \n", arr_vocali[i], targs[i].result);
    }
    return 0;
   
    
}










