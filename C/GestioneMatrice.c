#include <stdio.h>
#include <Windows.h>
#include <unistd.h>
#include <stdbool.h>
#define max 100

void presentazione(){

    system("cls");
    printf("----- Gestione di Matrice ----\n");
    printf("----- by Samuele Stabile -----\n\n\n");
    sleep(1);
    printf("https://linktr.ee/SamuRaider\n\n\n");
    sleep(1);
    system("pause");
    system("cls");

}

int menu(){

    int scelta;

    system("cls");
    
    printf("----------------MENU-----------------\n");
    printf("[1] Visualizza Matrice \n");
    printf("[2] Ri-riempi la matrice \n");
    printf("[3] Visualizzare diagonale principale \n");
    printf("[4] Visualizzare diagonale opposta \n");
    printf("[5] Visualizzare la matrice trasposta \n");
    printf("[6] Somma degli elementi della matrice \n");
    printf("[7] Somma riga a scelta \n");
    printf("[8] Somma colonna a scelta \n");
    printf("[9] Termina Programma \n\n");

    printf("Inserisci Operazione: ");
    scanf("%d", &scelta);
    printf("\n\n");

    return(scelta);

}

void fill_matrix(int matrix[max][max], int rows, int cols){

    for (int i = 0; i < rows; i++){

        for(int j = 0; j < cols; j++){
            printf("Casella [%d][%d] = ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix_index(int rows_cols){

    printf("   ");

    for(int k = 0; k < rows_cols; k++){
        printf("  %d  ", k);
    }
    printf("\n");
}

void view_matrix(int matrix[max][max], int rows, int cols){

    printf("--- Matrice Visualizzata ---\n");

    print_matrix_index(rows);

        for (int i = 0; i < rows; i++){

        printf(" %d ", i);

            for(int j = 0; j < cols; j++){
                printf(" [%d] ", matrix[i][j]);
            }
        printf("\n");
    }
} 

int get_rows (){

    int sub_rows;

    do{
        system("cls");
        printf("Righe matrice: ");
        scanf("%d", &sub_rows);
    
        if(sub_rows <= 0 || sub_rows >= max){
            printf("\n\nATTENZIONE! Valore non accettabile, Riprova!\n\n");
            system("pause");
        }
        
    } while (sub_rows <= 0 || sub_rows >= max);

    system("cls");
    return sub_rows;
}

bool check_squarematrix(int rows, int cols){
    if(rows == cols){
    return true;
    }
    else{
        return false;
    }

}

void diagonale (int matrix[max][max], int rows, int cols, bool principale_opposta ){

system("cls");

    if(check_squarematrix(rows, cols) == true){

        if(principale_opposta){
            
                    printf("\n-----DIAGONALE PRINCIPALE-----\n\n");
                    for(int i = 0; i < rows; i++){

                            for(int f = 0; f < i; f++){					 										
                                printf("   ");							
                                    }	

                    printf("[%d]\n", matrix[i][i]);
                    }
            }
            else{
                    printf("\n-----DIAGONALE OPPOSTA-----\n\n");
                    
                    int righe = 0;
                    int colonne = cols - 1;
                    
                    do										// ciclo di visualizazzione diagonale
                    {
                        if (colonne > 0) {
                            for(int f = 0; f < colonne; f++){
                                printf("   ");					
                            }		
                        }						
                        				                     					
                        printf("[%d]\n", matrix[righe][colonne]);

                        righe++;
                        colonne--;

	                } while (righe < cols);
            }
    }
    else{
        printf("\nMatrice non Quadrata! Impossibile determinare una Diagonale Principale!\n\n");
        }
    
}

int get_cols (){

    int sub_cols;

    do{
        system("cls");
        printf("Colonne matrice: ");
        scanf("%d", &sub_cols);
    
        if(sub_cols <= 0 || sub_cols >= max){
            printf("\n\nATTENZIONE! Valore non accettabile, Riprova!\n\n");
            system("pause");
            }
        
    } while (sub_cols <= 0 || sub_cols >= max);

    system("cls");
    return sub_cols;
}

void matrice_trasposta(int matrix[max][max],int rows, int cols){

    for(int i = rows-1; i >= 0; i--){
        for(int j = cols-1; j >= 0; j--){
            printf(" [%d] ", matrix[i][j]);
        }
        printf("\n");
    }
   
}

int sum(int matrix[max][max], int rows, int cols){
    
   int total_sum = 0;

   for(int i = 0; i < rows; i++){
       for(int j = 0; j < cols; j++){
           total_sum += matrix[i][j];
       }
   }
   return total_sum;
}

int rows_sum(int matrix[max][max], int rows, int cols){

    int row_selected;
    int rows_sum = 0;
    view_matrix(matrix, rows, cols);

    printf("\n\n Scegli la riga da addizionare: ");
    scanf("%d", &row_selected);

    for(int i = 0; i < rows; i++){
        rows_sum += matrix[row_selected][i];
    }

    return rows_sum;

}

int cols_sum(int matrix[max][max], int rows, int cols){

    int col_selected;
    int cols_sum = 0;
    view_matrix(matrix, rows, cols);

    printf("\n\n Scegli la colonna da addizionare: ");
    scanf("%d", &col_selected);

    for(int i = 0; i < cols; i++){
        cols_sum += matrix[i][col_selected];
    }

    return cols_sum;

}

int main(){

    int rows, cols; 
    int matrix[max][max];
    bool end_bool = false;

    presentazione();
    
    rows = get_rows();
    cols = get_cols();

    system("cls");

    fill_matrix(matrix, rows, cols);
    do{
        switch(menu()){
            
            case 1: 
            system("cls");
            view_matrix(matrix, rows, cols);
            system("pause");
            break;

            case 2: 
            system("cls");
            fill_matrix(matrix, rows, cols);
            system("pause");
            break;

            case 3: 
            system("cls");
            diagonale(matrix, rows, cols, true);
            system("pause");
            break;

            case 4: 
            system("cls");
            diagonale(matrix, rows, cols, false);
            system("pause");
            break;

            case 5: 
            system("cls");
            matrice_trasposta(matrix, rows, cols);
            system("pause");
            break;

            case 6:
            system("cls");
            printf("\n\nLa somma di tutti gli elementi della matrice --> [%d]\n\n", sum(matrix, rows, cols));
            system("pause");
            break;

            case 7:
            system("cls");
            printf("\n\nSomma Riga selezionata: --> [%d]\n\n", rows_sum(matrix, rows, cols));
            system("pause");
            break;

            case 8:
            system("cls");
            printf("\n\nSomma Colonna selezionata: --> [%d]\n\n", cols_sum(matrix, rows, cols));
            system("pause");
            break;

            case 9:
            end_bool = true; //oppure return 0 oppure reutrn EXIT_SUCCESS
            break;

            default:
            system("cls");
			printf("\n\nERRORE: La scelta deve essere compresa tra 1 e 9!\n\n");
			system("pause");
			break;
        }
    } while(end_bool == false);

    system("cls");
    printf("\nE' stato un Piacere! :)");
    printf("\n\nAddio!\n\n");
    return 0;
}
