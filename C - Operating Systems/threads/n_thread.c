#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <math.h>


typedef struct {
    int num;
    int result;
}Samup;

void *thread_func(void*args){
    
    Samup *p = (Samup*)args;

    p->result = 0;
    
    if(p->num == 0)
          p->result = 1;
          
    int i = p->num, fact = 1;
    while (p->num / i != p->num) {
        fact = fact * i;
        i--;
    }
    p->result = fact;
    
    return NULL;
}
int main(int argc, char*argv[]){
    
    pthread_t tid[3];
    int numero = atoi(argv[1]);
    int numero2 = atoi(argv[2]);
    Samup targs[3];
    
    targs[0].num = numero;
    targs[1].num = numero2;
    targs[2].num = numero - numero2;
    
    for(int i = 0; i < 3; i++){
        if(pthread_create(&tid[i], NULL, thread_func, &targs[i]) != 0){
            printf("Errore pthread_create");
            return 1;
        }else{
            pthread_join(tid[i], NULL);
            printf("result: %d\n", targs[i].result);
        }
    }
    float coeff = targs[0].result/(targs[1].result*targs[2].result);
    printf("Coefficiente Binomiale: [%f]", coeff);
    
    
    
    
    
    return 0;
}
