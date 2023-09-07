// Samuele Stabile 9 Settembre 2023

#include <stdio.h>
#include <stdlib.h>

int max(int *a, int *b){
    if(*a > *b){
        return *a;
    }else{
        return *b;
    }
}

int main(int argc, char **argv)
{
    int i = 69, j = 420;

    printf("Max: %d\n", max(&i, &j));
}