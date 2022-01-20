#include <stdio.h>
#define length 50

int max(int arr[length], int quantity);
int min(int arr[length], int quantity);

int main(){

FILE* fileStream = fopen("mat.dat", "r");

int array[length];
int quantity = 20;
int i = 0;

//-------Assorbire in un array[], dei numeri da un file----------
for( int i = 0; (!feof(fileStream)); i++){
    fscanf(fileStream, "%d\n", &array[i]);
   }
//---------------------------------------------------------------
system("cls");
for(int j = 0; j < quantity; j++){
    printf("Numero [%d]: %d\n", j+1, array[j]);
}

printf("\nMax Number --> [%d]", max(array,quantity));
printf("\nMin Number --> [%d]\n\n", min(array,quantity));

}

int max(int arr[length], int quantity){

int max = arr[0];

for(int i = 0; i < quantity; i++){
    if( arr[i] > max ){
        max = arr[i];
    }
}

return max;
}

int min(int arr[length], int quantity){

int min = arr[0];

for(int i = 0; i < quantity; i++){
    if( arr[i] < min ){
        min = arr[i];
    }
}

return min;

}
