/*• Un file contiene una sequenza (di lunghezza ignota) di 
numeri interi positivi, uno per riga. I numeri sono scritti in 
lettere cifra per cifra, e sono terminati dalla parola stop. 
Come esempio si consideri il seguente file: 
otto cinque nove stop 
due due stop 
sette zero sette stop 
Il file contiene i numeri 859, 22 e 707. 
• Si scriva un programma C, opportunamente organizzato 
in funzioni, che legga da tastiera il nome del file e stampi 
il valore della somma dei numeri ivi contenuti. 
Nell’esempio il programma deve stampare 1588. 
• Si assuma che i numeri siano di dimensione tale da 
essere rappresentabili tramite il tipo int.*/
#include <stdio.h>
#include <string.h>
#define max 50

FILE* ApriFile(char* mode);
int converti(char toconvert[max]);

int main(){

    FILE* streamFile;
    char string[max+1];
    int numero;
    int cont = 0;
    int array[max];
    int i = 0;

    system("cls");
    streamFile = ApriFile("r");

    while(!feof(streamFile)){
    fscanf(streamFile, "%s ", string);
    printf("%s\n", string);
  
    //converto
        if((strcmp(string, "stop"))){
            //se la stringa non é stop eseguo il codice

             numero = converti(string);
             printf("CONVERTITO: [%d]\n", numero);
             
             cont = (cont*10) + numero;
             printf("PARZIALE ATTUALE [%d]\n",cont);
        }
        else{
            //se la stringa é stop
            //printf("ci sta stop\n");
            printf("\n--------------------------------\n");
            array[i] = cont;
            cont = 0;
            i++;
        }
    }

    printf("\n------NUMERI IN ARRAY-----\n");
    for(int k=0;k<i;k++){
        printf("\n[%d]", array[k]);
    }
    printf("\n--------------------------------\n");
    printf(" Numero di Celle nell'array: [%d]\n", i);
    printf("--------------------------------");
    printf("\nSomma degli Elementi nel File --> [%d]\n\n" , somma(array,i));
    return 0;

}

int somma(int a[], int dim){

    int sum = 0;

    for (int j = 0; j < dim; j++){
        sum += a[j];
    }
    return sum;
}

int converti(char toconvert[max]){

    if(!(strcmp(toconvert , "zero"))){
        return 0;
    } else if (!(strcmp( toconvert , "uno"))){
        return 1;
    } else if (!(strcmp( toconvert , "due"))){
        return 2;
    } else if (!(strcmp( toconvert , "tre"))){
        return 3;
    } else if (!(strcmp( toconvert , "quattro"))){
        return 4;
    } else if (!(strcmp( toconvert, "cinque"))){
        return 5;
    } else if (!(strcmp( toconvert , "sei"))){
        return 6;
    } else if (!(strcmp( toconvert , "sette"))){
        return 7;
    } else if (!(strcmp( toconvert , "otto"))){
        return 8;
    } else if (!(strcmp( toconvert , "nove"))){
        return 9;
    }
}

FILE* ApriFile(char* mode){
    
    FILE* file;
    char nomefile[max+1];

    printf("Inserire Nome File: ");
    scanf("%s", nomefile);

    if((file = fopen(nomefile, mode)) == NULL){
        printf("Errore to open file");
    }
    return file;
}