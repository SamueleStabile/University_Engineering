#include <stdio.h>
#define LENGTH 50

int main(){

system("cls");

FILE *fp;

char s[LENGTH+1];

if( (fp = fopen("marco.txt","r") ) == NULL){

    printf("Impossibile aprire \n"); 
    return 0;
}
printf("le stringhe lette dal file sono:\n");

    while (fscanf(fp, "%s", s) != EOF){
    printf("%s\n", s);
    }
    fclose(fp);

return 0;
}