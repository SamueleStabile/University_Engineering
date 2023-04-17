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
    
    if(pipe(fd)<0){
        printf("Errore Pipe");
        return 1;
    }
    
    pid_t pid = fork();
    
    if(pid<0){
        printf("Errore Fork");
        return 1;
    }
    else if(pid == 0){
        //Processo Figlio
        close(fd[0]);//Chiudo la lettura
        
        int num;
        printf("Inserisci Numero: ");
        scanf("%d", &num);
        
        int sent = write(fd[1], &num, sizeof(num));
        
        if(sent != sizeof(num)){
            printf("Errore nell' invio");
            return 1;
        }
        close(fd[1]); //chiudo scrittura
        return 0;
    }
    else{
        //Processo padre
        wait(NULL);
        close(fd[1]); //chiudo la scrittura
        
        int num;
        int ricevuti = read(fd[0], &num, sizeof(num));
        
        if (ricevuti < 0) {
            printf("Errore nella ricezione!\n");
        } 
        else if (ricevuti < sizeof(num)){
            printf("Messaggio parziale!\n");
        }
        else{
        printf("Numero Ricevuto [%d]", num);
        printf("\n");
        
        close(fd[0]); //chiudo lettura
        }
    }
}






