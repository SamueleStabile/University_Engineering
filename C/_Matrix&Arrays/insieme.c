#include <stdio.h>

int main(){
    int n, m;
    int reali[1000];

    system("cls");

    printf("\nInserisci N (valore range 1 a N dei numeri): ");
    scanf("%d", &n);
    printf("\nInserisci M (Multiplo da dividere per i numeri reali da 1 a N): ");
    scanf("%d", &m);

    for (int i = 1; i <= n ; i++) {
        reali[i] = i;
    }

    /*for(int j = 1; j <= n; j++ ){         //visualizza array riempito
        printf("%d \n", reali[j]);
    } */

    multiplo(reali, n, m);

    printf("\n");

}

void multiplo(int vett[1000], int n, int m){        

        printf("\nI Multipli di M appartenenti all'insieme N sono: ");
        for(int i = 1; i <= n; i++){
            if(vett[i]%m == 0){
                printf(" [%d] ", vett[i]);
            }
        }
}

