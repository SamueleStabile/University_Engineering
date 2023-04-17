#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <sys/stat.h>
#define MAX_SIZE 100

void genera_array(int n, int *vet){
     
     for(int i = 0; i < n; i++){
         if(i==0 || i==1){
             vet[i] = 1;
         }
         else{
         vet[i] = vet[i-1] + vet[i-2];
        }
     }
     /*for(int i=0; i<n; i++){
         printf("Leggo dal figlio [%d]\n", vet[i]);
     }*/ //debug
     
}

int main (int argc, char *argv[]){
    
     int n = atoi(argv[1]);
     printf("Numero preso: [%d]\n", n);
 
int segment_id = shmget(IPC_PRIVATE, MAX_SIZE*sizeof(float), S_IRUSR | S_IWUSR);
 
 if(segment_id < 0){
     printf("Errore shmget");
     return 1;
 }
 
 pid_t pid = fork();
 
 if(pid < 0){
     printf("Errore fork");
     shmctl(segment_id, IPC_RMID, NULL);
     return 1;
 }
 else if(pid == 0){
     
     //processo figlio
     int *vet = shmat(segment_id, NULL, 0);
     
     genera_array(n,vet);
     
     shmdt(vet);
     return 0;
 }
 else{
     //padre
     wait(NULL);
     int *vet = shmat(segment_id, NULL, 0);
     printf("Leggo dal Padre: ");
     for(int i=0; i<n; i++){
         printf(" [%d] ", vet[i]);
     }
     shmdt(vet);
     shmctl(segment_id, IPC_RMID, NULL);
 }
}
  
 
