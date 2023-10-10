// Samuele Stabile 9 Settembre 2023

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *nome, char *cognome);

int main(int argc, char **argv)
{
    system("cls");

    struct persona
    {
        char cognome[10];
        char nome[10];
        int anni;
    };

    int num_persone;

    printf("Quanti cristiani vuoi riempire?: ");
    scanf("%d", &num_persone);

    // Alloca dinamicamente un vettore di struct persona
    struct persona *gruppo = (struct persona *)malloc(num_persone * sizeof(struct persona));
    ;

    for (int i = 0; i < num_persone; i++)
    {

        printf("Nome Persona [%d]: ", i);
        scanf("%s", gruppo[i].nome);
        // printf("[%s]", gruppo[i].nome);

        printf("Cognome Persona [%d]: ", i);
        scanf("%s", gruppo[i].cognome);
        // printf("[%s]", gruppo[i].cognome);

        printf("Anni Persona [%d]: ", i); 
        scanf("%d", &gruppo[i].anni);
        // printf("[%d]", gruppo[i].anni);
    }

    printf("\n--[INVERSIONE]--\n");

    for (int i = 0; i < num_persone; i++)
    {
        swap(gruppo[i].nome, gruppo[i].cognome);

        printf("Nome [%d]: [%s]\n", i, gruppo[i].nome);
        printf("Cognome [%d]: [%s]\n", i, gruppo[i].cognome);
        printf("Anni [%d]: [%d]\n", i, gruppo[i].anni);
        printf("\n");

        swap(gruppo[i].nome, gruppo[i].cognome);
    }

    free(gruppo);

    return 0;
}

void swap(char *nome, char *cognome)
{

    char temp[100];
    char temp2[100];

    int c = strlen(nome)-1;

    for (int i = 0; i < strlen(nome); i++)
    {
        temp[i] = nome[c];
        //printf("\nTEMP[%c]", temp[i]);
        c--;
    }
        temp[strlen(nome)] = '\0'; //carattere terminatore

    int f = strlen(cognome)-1;

    for (int i = 0; i < strlen(cognome); i++)
    {
        temp2[i] = cognome[f];
        //printf("\nTEMP[%c]", temp[i]);
        f--;
    }
        temp2[strlen(cognome)] = '\0'; //carattere terminatore

    //printf("\nNome Invertito[%s]", temp);
    //printf("\nCogome Invertito[%s]\n", temp2);
    
    strcpy(nome, temp);
    strcpy(cognome, temp2);

    //printf("\nScope funzione[%s]", nome);
    //printf("\nScope funzione[%s]", cognome);
}