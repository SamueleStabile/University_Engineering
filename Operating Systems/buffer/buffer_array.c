#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <sys/stat.h>

#define ARRAY_SIZE 100
#define HALF_SIZE (ARRAY_SIZE/2)

int main(){
    
    int segment_id = shmget(IPC_PRIVATE, ARRAY_SIZE*sizeof(float), S_IRUSR | S_IWUSR); //alloco memoria della dimensione dell array*DimDelFloat
    
    if(segment_id<0){
        printf("Errore shmget");
        return 1;
    }
    for(int i = 0; i<2; i++){
        pid_t pid = fork();
        
        if(pid < 0){
            
            printf("Errore Fork");
            if(i==1){
                printf("C'é giá un figlio, aspetto prima di deallocare");
                wait(NULL);
            }
            shmctl(segment_id, IPC_RMID, NULL);
            return 1;
            
        }
        if(pid == 0){
            //processo figlio
            
            float *vet = (float*) shmat(segment_id, NULL, 0);
            
            int inizio = HALF_SIZE*i;
            int fine = inizio+HALF_SIZE;
            int j;
            for(j=inizio; i<fine; j++){
                vet[j]= 1.0/(j+1);
                //printf("[%f]", vet[j]);
            }
            
        }
    }
    
    for(int i=0; i<2; i++){
        wait(NULL);
    }
    
    float *p = shmat(segment_id, NULL,0);
    
    float somma=0.0;
    
    for(int i=0; i<ARRAY_SIZE; i++){
        somma+=p[i];
    }
    printf("Somma dell'array: %g\n", somma);
    
    /* Scollego l'area di memoria */
    shmdt(p);
    /* Dealloco l'area di memoria */
    shmctl(segment_id, IPC_RMID, NULL);
    return 0;
}
