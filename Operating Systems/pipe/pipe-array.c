#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <sys/stat.h>

#define N 10

int leggi_messaggio(int fd, void *msg, int size);

int main (){
    
    int fd[2];
    
    if(pipe(fd) < 0){
        printf("Errore Creazione Pipe");
        return 1;
    }
    
    pid_t pid = fork();
    
    if(pid < 0){
        printf("Errore Fork");
        return 1;
    }
    else if(pid == 0){
        
        //Processo Figlio
        close(fd[0]); //chiudo lettura
        
        int vet[5];
        
        for(int i = 0; i<5; i++){
            printf("Inserisci Numero [%d]: ", i+1);
            scanf("%d", &vet[i]);
        }
        
        //prima assorbo tutti i numeri nel vettore
        //dopo invio i primi 2 e poi aspetto ed invio gli altri 3
        //ricorda che stiamo mandando un flusso di byte!
        
        int sent1 = write(fd[1], &vet[0], 2*sizeof(int));
        
        sleep(1);
       
        int sent2 = write(fd[1], &vet[2], 3*sizeof(int));
        
        if(sent2+sent1 != sizeof(vet) ){
            printf("Errore Scrittura");
        }
         /*for(int i = 0; i<5; i++){
            printf("Letto in figlio [%d]\n ", vet[i]);
        }*/ //debug
        
        close(fd[1]); //chiudo scrittura
        return 0;
    }
    else{
        //Padre
        wait(NULL);
        close(fd[1]);
        
        int vet[5];
        int ricevuti = leggi_messaggio(fd[0], &vet, sizeof(vet));
        
        if(ricevuti < 0){
            printf("Errore lettura");
            return 1;
        }
        if(ricevuti < sizeof(vet)){
            printf("Messaggio Parziale");
            return 1;
        }
        else {
            for(int i = 0; i < 5; i++){
                printf("Ricevuto [%d]\n", vet[i]);
            }
        }
        
        close(fd[0]); //chiudo lettura
        return 0;
    }
    

}

/* Legge un messaggio da una pipe, ripetendo la lettura se il
* messaggio è incompleto.
* Restituisce il numero di byte letti (che può essere
* minore della dimensione richiesta in caso di errore).
*/
int leggi_messaggio(int fd, void *msg, int size){
    
    /* Puntatore a byte per manipolare il messaggio */
    unsigned char *p = (unsigned char *)msg;
    
    /* Numero totale di byte ricevuti */
    int tot_ricevuti = 0;
    
    /* Ripete finché il messaggio è completo */
    while (tot_ricevuti < size) {
        
        int ricevuti= read(fd, p, size - tot_ricevuti);
        /* Se non può ricevere altri byte, ritorna */
        
        if (ricevuti <= 0)
            return tot_ricevuti;
            
        tot_ricevuti += ricevuti;
        
        /* Avanza il puntatore al pezzo mancante del messaggio */
        
        p += ricevuti;
    }
    return tot_ricevuti;
    
}







