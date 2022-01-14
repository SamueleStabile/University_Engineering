#include <stdio.h>

int main(){

    int n1,n2,n3;
    int diff1, diff2;

    printf("Inserisci tre numeri: ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);

    diff1 = n2 - n1;
    diff2 = n3 - n2;

    if(diff1 == diff2 && diff1!=0 && diff2!=0)
        printf("I tre numeri sono una successione");
    else
        printf("Non successivi");

}