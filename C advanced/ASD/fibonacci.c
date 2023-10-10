#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibonacci(int n);

int main(int argc, char **argv){
    
    int n;
    if (argc == 2)
    {
        n = atoi(argv[1]);
        printf("%d\n", n);
    }else{
        printf("Inserire N in riga di comando");
        return 1;   
    }


    printf("%d\n", fibonacci(n));
}

int fibonacci(int n){

    if(n == 0){
        return 0;
    }
    if(n ==1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    return fibonacci(n-1) + fibonacci(n-2) + fibonacci(n-3);
    
}
    
