#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void Hanoi( int *O, int *I, int *D, int n);

void printTower(int *T1, int *T2, int *T3, int n){
    printf("\n\n\nTORRE 1: ");
    for (int i = 0; i < n; i++){
        printf("%d ",T1[i]);
    }
    printf("\nTORRE 2: ");
    for (int i = 0; i < n; i++){
        printf("%d ",T2[i]);
    }
    printf("\nTORRE 3: ");
    for (int i = 0; i < n; i++){
        printf("%d ",T3[i]);
    }
}
int main(int argc, char** argv){

    int n = atoi(argv[1]); //aggiungere n alla fine del comando del terminale

    //int n = 3;

    int *O = calloc(n, sizeof(int));
    int *I = calloc(n, sizeof(int));
    int *D = calloc(n, sizeof(int));

    assert(I != NULL && O != NULL && D != NULL);

    for(int i = 0; i < n; i++){
        O[i] = n - i;
        D[i] = 0;
        I[i] = 0;
    }
    printTower(O,I,D,n);

    Hanoi(O,I,D,n);

    printTower(O,I,D,n);
    free(O);
    free(I);
    free(D);
    }

    void Hanoi( int *O, int *I, int *D, int n){
        if (n == 1){
            D[0] = O[0];
            O[0] = 0;
            return;
        }
        Hanoi(O + 1, D , I, n-1);
        Hanoi(O,I,D,1);
        Hanoi(I,O,D+1, n-1);
        
    }

