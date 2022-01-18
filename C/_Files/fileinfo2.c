#include <stdio.h>
#define LENGTH 50
int main(){

FILE *fp; char s[LENGTH+1];

fp = fopen("marco.txt","r");

    if (fp==NULL){
        printf("Error");
        return 0;
    } /* Errore di apertura */

    else {
        
    while (!feof(fp)) {
        
        fscanf(fp, "%s", s);
        printf("%s\n",s);
    }
    fclose(fp); 
    }
}
