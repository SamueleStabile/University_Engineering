#include <math.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

FILE* ApriFile(char* mode);
int TrovaNumeri(char s[100]);
void Totale(int a[SIZE],int k);

int main() {

    FILE* fp;
    fp=ApriFile("r");
    return 0;
}

FILE* ApriFile(char* mode){
    FILE* fpt;
    char s[100];
    int a[SIZE],k=0,z,n=0;
    fpt=fopen("numeri.txt","r");

    while(fscanf(fpt,"%s",s)!=EOF){

        if(strcmp(s,"stop")!=0){
            n   =   (n*10)  +   TrovaNumeri(s);
        }
        else{
            a[k] = n;
            n = 0;
            k++;
        }
    }
    Totale(a,k);
    fclose(fpt);
    return fpt;
}

int TrovaNumeri(char s[100]){
    if(strcmp(s,"zero") == 0)
        return 0;
    if(strcmp(s,"uno")==0)
        return 1;
    if(strcmp(s,"due")==0)
        return 2;
    if(strcmp(s,"tre")==0)
        return 3;
    if(strcmp(s,"quattro")==0)
        return 4;
    if(strcmp(s,"cinque")==0)
        return 5;
    if(strcmp(s,"sei")==0)
        return 6;
    if(strcmp(s,"sette")==0)
        return 7;
    if(strcmp(s,"otto")==0)
        return 8;
    if(strcmp(s,"nove")==0)
        return 9;
}

void Totale(int a[SIZE],int k){
    int x=0;
    for(int i=0;i<k;i++)
        x+=a[i];
    printf("Il totale e' %d",x);
    return;
}