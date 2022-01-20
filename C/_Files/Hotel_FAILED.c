#include <stdio.h>
#include <string.h>
#define MAX 50

FILE* ApriFile(char *mode);
int Confronta(FILE* infofile, char nome_albergo[MAX+1], int numero_stelle, int numero_servizi, char servizi[MAX+1][MAX+1], 
char servizio_cercato[MAX+1], int numero_stelle_cercato, int numero);

int main(){

system("cls");
FILE* fp;
char string[MAX+1];
int numero = 0;
int output = 0;

char nome_albergo[MAX+1];
int numero_stelle;
int numero_servizi;
char servizi[MAX+1][MAX+1];
char servizio_cercato[MAX+1];
int numero_stelle_cercato;

fp = ApriFile("r");

printf(" Inserisci Servizio Cercato: ");
scanf("%s", servizio_cercato);
printf(" Inserisci Stelle minime richieste: ");
scanf("%d", &numero_stelle_cercato);
    
printf("\n --------ALBERGHI DISPONIBILI-------\n\n");

    while(!feof(fp)){

    LeggiRigaFile(fp, nome_albergo,numero_stelle,numero_servizi, servizi);

        for(int i=0; i< 5; i++){
        output = output + Confronta(fp, nome_albergo,numero_stelle,numero_servizi, servizi, servizio_cercato ,numero_stelle_cercato,numero);
        }

    }
    printf("\n DIO:");

}

FILE* ApriFile(char *mode){

    FILE* sub_file;
    char filename[MAX+1];


    printf("Nome file: ");
    scanf("%s", filename);

    if( (sub_file = fopen(filename, mode)) == NULL){
        printf("Error to open file");
        return 0;
    }
    return sub_file;
}
//input nome_servizio e numero_stelle
//output numero di alberghi con quel servizio e quelle stelle
void LeggiRigaFile(FILE* infofile, char nome_albergo[MAX+1], int numero_stelle, int numero_servizi, char servizi[MAX+1][MAX+1]){

    char ch;
    int star_counter = 0;

    //scan nome albergo
    fscanf(infofile, "%s ", nome_albergo);
    printf("\n%s ", nome_albergo);

    //scan numero_stelle
    while((ch = fgetc(infofile)) != ',' ){
        if( ch == '*'){
            star_counter++;
        }
        printf("%c", ch);
    }
    printf(" [%d] ", star_counter);

    //scan numero servizio
    fscanf(infofile, "%d ", &numero_servizi);
    printf("[%d] ", numero_servizi);
    //scan di servizi

    for(int i = 0; i < numero_servizi; i++){
            fscanf(infofile, "%s", servizi[i]);
            printf("[%d][%s]",i, servizi[i]);
    }
    
}

int Confronta(FILE* infofile, char nome_albergo[MAX+1], int numero_stelle, int numero_servizi, char servizi[MAX+1][MAX+1], 
char servizio_cercato[MAX+1], int numero_stelle_cercato, int numero){


    for(int i = 0; i < numero_servizi; i++){
        if(((strcmp(servizi[i], servizio_cercato)) == 0) /*&& (numero_stelle_cercato > numero_stelle)*/){
            numero++;
            
        }
    }
    return numero;
}

