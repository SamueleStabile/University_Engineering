#include <stdio.h>
int main(){
    /*Per stampare gli indirizzi di una variabile utilizziamo la stringa 
    di formato %p (pointer) e poi nel printf() dobbiamo specificare la variabile
    con &variabile (& == indirizzo della cella di memoria)
    */
    int a;      // 4 bytes
	float b;    // 4 bytes
	char c;     // 1 bytes

	printf("Address of a: %p\n", &a);
	printf("Address of b: %p\n", &b);
	printf("Address of c: %p\n", &c);
    
}