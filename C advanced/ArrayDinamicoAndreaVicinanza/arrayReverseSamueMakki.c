#include "TInfo.h"
#include "ArrayDinamico.h"
#include <stdlib.h> 
#include <stdio.h> 

void arrayReverse(TArray* array){
  if(array->length == 0 || array->length == 1){ //se la dimensione dell'array è zero o uno non ci sarà bisogno di invertirlo
   return; //esco dalla funzione
  }
  array->length--; 
  //Classica funzione di Swap
  TInfo temp = array->items[0];
  array->items[0] = array->items[array->length];
  array->items[array->length] = temp;
  //fine funzione di swap  
  array->items++; //punto all elemento successivo al primo
  array->length--; //punto al penultimo elemento
  //cosi facendo riduco l'array da 7 elementi a 5 
  arrayReverse(array);
  /*quando arriverò al punto che il mio array sarà di 1 elemento
  eseguirò queste 2 successive righe di codice per un tot ripetizioni quante lo sono
  state le chiamate di ricorsione (es. 3 ricorsioni di arrayReverse() = 3 esecuzioni delle successive due righe
  di codice). AL FINE di ripristinare la grandezza originale del vettore array,
  dobbiamo fare quest operazione poichè successivamente dovremmo stampare il vettore
  dove ci serviranno .items e .length originali del vettore*/
  array->items--; //
  array->length = array->length+2;
  return;

}

int main(int argc, char** argv){
    TArray array = arrayCreate(argc-1); //creo array dinamico
   for (int i = 1; i < argc; i++){
      array.items[i-1] = atoi(argv[i]);
   }
   arrayPrint(&array);
   printf("LENGTH: %d\n", array.length);
   arrayReverse(&array);
   arrayPrint(&array);

}