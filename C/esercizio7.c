#include <stdio.h>
#include <Windows.h>
#define max_ 100

void fill_matrix(int matrone[max_][max_], int rows_cols){

    for (int i = 0; i < rows_cols; i++){

        for(int j = 0; j < rows_cols; j++){
            printf("Casella [%d][%d] = ", i+1, j+1);
            scanf("%d", &matrone[i][j]);
        }
    }
}

void view_matrix(int matrone[max_][max_], int rows_cols){

    printf("--- Matrice Visualizzata ---\n");

        for (int i = 0; i < rows_cols; i++){

        printf(" %d ", i);

            for(int j = 0; j < rows_cols; j++){
                printf(" [%d] ", matrone[i][j]);
            }
        printf("\n");
    }
} 

void transfer(int matrone[max_][max_], int iannone[max_], int rows_cols){

int temp = 1;
int max = iannone[0];

    for(int i = 0; i < rows_cols; i++){

        temp = 1;

        for(int j = 0; j< rows_cols; j++){
                if( matrone[i][j] % 3 == 0){
                    temp = temp * matrone[i][j];
                }

                iannone[i] = temp;
        }
    }

    for(int k = 0; k < rows_cols; k++){
        if(iannone[k] > max ){
            max = iannone[k];
        }
        printf(" [%d]\n", iannone[k]);
    }

    printf("\n\n Il Massimo e': [%d]", max);

}


int main(){

int rows_cols;
int matrone[max_][max_];
int iannone[max_];

system("cls");
printf("Inserisci dimensione Matrice: ");
scanf("%d", &rows_cols);

while( rows_cols <= 0 || rows_cols >= max_ ){
    
    printf("Riprova!\n");

    system("pause");
    system("cls");

    printf("Inserisci dimensione Matrice: ");
    scanf("%d", &rows_cols);

}
system("cls");
fill_matrix(matrone, rows_cols);
system("cls");
view_matrix(matrone, rows_cols);
system("cls");
transfer(matrone, iannone, rows_cols);

}
