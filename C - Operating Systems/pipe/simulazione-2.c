#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <sys/stat.h>



int main (){
    
    int fd[2]; 
    
    if(pipe(fd)<0){
        printf("Errore Pipe");
        return 1;
    }
    
    pid_t pid = fork();
    
    if(pid < 0){
        printf("Errore Fork");
        return 1;
    }
    else if(pid == 0){
        
        //processo figlio
        close(fd[0]); //chiudo la lettura
        
        int num;
        printf("Inserisci Numero: ");
        scanf("%d", &num);
        
        for(int i = 0; i <= num; i++){
            int msg = num-i;
            int sent = write(fd[1], &msg, sizeof(int));
         
          if(sent != sizeof(int)){
            printf("Errore Scrittura");
            return 1;
            }
        }
        close(fd[1]);
        return 1;
        
    }
    else{
        wait(NULL);
        close(fd[1]); //chiudo Scrittura
        
        int num;
        do{
            
            int ricevuti = read(fd[0], &num, sizeof(int));
            
            if(ricevuti < 0){
                printf("Errore lettura");
                return 1;
            }
            if(ricevuti < sizeof(num)){
                printf("Messaggio Parziale");
                return 1;
            }
            
           printf("Leggo dal padre [%d]\n", num);
           
    }while(num>0);
    
    }
}








