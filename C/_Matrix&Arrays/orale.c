#include <stdio.h>

void leggi(FILE* fpTEMP, int *rig, int *col, int mat[][10]);

int main() {
    int dimrig, dimcol;

    FILE* fp = fopen("matrice.txt", "r");

    int matrix[10][10];

 leggi(fp, &dimrig, &dimcol, matrix);

    printf("RIGA: %d \n", dimrig);
    printf("COLONNA: %d \n", dimcol);

    printf("TEST SE VEDE LA MATRICE NEL MAIN -->[%d]", matrix[0][0]);

}

void leggi(FILE* fpTEMP, int *rig, int *col, int mat[][10]) {

    fscanf(fpTEMP, "%d\n", rig);
    fscanf(fpTEMP, "%d ", col);


    for(int i = 0; i < *rig; i++) {
        for(int j = 0; j < *col; j++){
            fscanf(fpTEMP, "%d ", &mat[i][j]);
            printf("[%d]", mat[i][j]);
        }
        printf("\n");
    }

}

