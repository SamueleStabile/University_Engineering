#include <stdio.h>
#include <stdbool.h>

int main(){
    int giorno;
    int mese;
    int anno;
    bool corretto, bisestile;
   
    printf("Inserisci anno: ");
    scanf("%d", &anno);
    printf("Inserisci mese: ");
    scanf("%d", &mese);
    printf("Inserisci giorno: ");
    scanf("%d", &giorno); 

    if((anno%4 == 0 && anno%100 != 0) || anno%400 == 0){
        bisestile = true;
    }

    
    
    if(bisestile == true){
       if( mese == 11 || mese == 4 || mese == 6 || mese == 9 ){
        if(giorno > 0 && giorno <= 30){
            corretto = true;
        }
       }
       else if (mese == 2){
           if(giorno > 0 && giorno <= 29){
            corretto = true;
        }
       }
       else if ( mese == 1 || mese == 3 || mese == 5 || mese == 8 || mese == 7 || mese == 10 || mese == 12 )  {
           if(giorno > 0 && giorno <= 31){
            corretto = true;
       }
       }
       else{
           corretto = false;
       }
    }
    else{
        if( mese == 11 || mese == 4 || mese == 6 || mese == 9 ){
        if(giorno > 0 && giorno <= 30){
            corretto = true;
        }
       }
       else if (mese == 2){
           if(giorno > 0 && giorno <= 28){
            corretto = true;
        }
       }
       else if ( mese == 1 || mese == 3 || mese == 5 || mese == 8 || mese == 7 || mese == 10 || mese == 12 ){
           if(giorno > 0 && giorno <= 31){
            corretto = true;
       }
    }
       else{
           corretto = false;
       }
    }

    if(corretto == true){
        printf("data corretta");
    }
    else if(corretto == false){
        printf("data sbagliata");
    }
}