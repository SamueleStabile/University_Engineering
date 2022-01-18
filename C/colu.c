#include <stdio.h>

int main(){
    FILE* fp;
    char n[15],f[50];
    int i;

    printf("Inserisci il nome del file\n");
    scanf("%s",n);

    printf("Inserisci cio' che vuoi scrivere all'interno del file\n");

    while(getchar()!='\n'){}    //pulisco il buffer

    for(i = 0; ( f[i] = getchar() ) != '\n'; i++){} //prendo in input una stringa

    f[i++] = '\0';

    if ((fopen(n,"w")) == NULL) {
        printf("ERRORE");
        return 0;
    }

    fprintf(fp,f);

    fclose(fp);

    int x=0;
    char z;
    if (fopen(n,"r") == NULL) {
        printf("ERRORE");
        return 1;
    }
    while ((z = fgetc(fp)) != EOF) {
        if (z != ' ' && z != '\n') {
            x++;
        }
    }

    printf("Il numero di caratteri nel file sono %d",x);
    fclose(fp);
    return 0;
}