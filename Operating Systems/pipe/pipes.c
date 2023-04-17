#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <sys/stat.h>

#define N 10

int main (){
    
    int fd[2];
    int i,n, messaggio[N];
    
    if (pipe(fd) < 0) {
        printf("Errore nella creazione pipe\n");
        return 1;
    }
    
    pid_t pid = fork();
    
    if (pid < 0){
      printf ("Errore nella fork\n");
      return 1;
    }
    
    else if(pid==0){
        
        /* Processo figlio */
        
        close(fd[0]); /* Chiudo la lettura poiché Non interessato a leggere */
       
        /* Prepara il messaggio */
        for(i = 0; i < N; i++){
            messaggio[i] = i;
        }
        
        int inviati = write(fd[1], messaggio, sizeof(messaggio)); //scrivo in pipe
        
        if (inviati != sizeof(messaggio)) {
        printf("Errore nell’invio!\n");
        return 1;
        }
        close(fd[1]); //chiudo scrittura 
        return 0;
        
    }
    else{
    /* Processo padre */
    
    close(fd[1]); /* Non interessato a scrivere */
    
    int ricevuti = read(fd[0], messaggio, sizeof(messaggio));
    
    if (ricevuti < 0) {
        printf("Errore nella ricezione!\n");
        } else {
        
    if (ricevuti < sizeof(messaggio)){
        printf("Messaggio parziale!\n");
        }
        
        /* Calcolo quanti valori ho ricevuto */
        n = ricevuti/sizeof(int);
        for(i = 0; i < n; i++)
        printf("%d ", messaggio[i]);
        printf("\n");
    }
    close(fd[0]);
    return 0;
        
    }
}