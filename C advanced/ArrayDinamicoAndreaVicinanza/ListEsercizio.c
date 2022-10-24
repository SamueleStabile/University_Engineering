#include <stdio.h>
#include <stdlib.h>
#include "ArrayDinamico.h"
#include "TInfo.h"
#include "TList.h"
#include "assert.h"
#include <stdbool.h>

bool list_is_empty(TList L){
    return L==NULL ;
}

TList listaClone(TList L){ 
 TList ret = listCreate();
 while(!list_is_empty(L)){
    ret =  listInsert(ret, L->info);
    L = L->link;
 }
return ret;
}

TList listaCloneRecursive(TList L){
   if (list_is_empty(L)){
      return listCreate(); //caso base
   }
   TList ret = listaCloneRecursive(L->link);
   ret = listInsert(ret, L->info);
   return ret; 
}
TList ListPari(TList L){
   TList ret = listCreate();
   while(!list_is_empty(L)){
      if(L->link!=NULL){
         ret = listInsert(ret, L->link->info); 
         L = L->link->link;
      }
      else
      ret = NULL;
   }
   return ret;
}


TList ListPariRecursive(TList L){
   if(list_is_empty(L) || list_is_empty(L->link)){//caso based
      return listCreate(); 
   }
      TList ret = ListPariRecursive(L->link->link);
      ret = listInsert(ret, L->link->info);
      return ret;
}

int main(int argc, char** argv){
 TList t = listCreate();
 for( int i = 0; i<20; i++){
    t = listInsert(t, i*i);
 }
    printf("\nLista = ");
    listPrint(t);
    printf("\nClone = ");
    TList ret = listaClone(t);
    listPrint(ret);

    printf("\nClone Recursive = ");
    TList ret2 = listaCloneRecursive(t);
    listPrint(ret2);

    printf("\nPari: ");
    TList ret3 = ListPari(t);
    listPrint(ret3);


    printf("\nPari Recursive: ");
    TList ret4 = ListPariRecursive(t);
    listPrint(ret4);


}