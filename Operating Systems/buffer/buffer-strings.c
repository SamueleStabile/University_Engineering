

int main(){
    
    int i = 0;
    
    int segment_id = shmget (IPC_PRIVATE, MAX_SIZE, S_IRUSR | S_IWUSR);
    if (segment_id < 0)
    {
      printf ("Errore in shmget\n");
      return 1;
    }
    
    pid_t pid = fork();
    
    if(pid<0){
        printf("Errore Fork");
        shmctl(segment_id, IPC_RMID, NULL);
        return 1;
    }
    
    else if (pid == 0){
        //processo figlio
        char temp[MAX_SIZE];
        printf("Inserisci la Parola: ");
        scanf("%s", temp);
        
        char *parola = (char *) shmat(segment_id, NULL, 0);
        strcpy(parola, temp);
        printf("Parola ricevuta dal figlio: [%s]\n", parola); 
        
        shmdt(parola);//scollego
        return 0;//termino figlio
            
    }
    else{
        //processo padre
        printf("Sono il padre, aspetto la terminazione del figlio...\n\n");
        wait(NULL); //aspetto il figlio che finisce
        
        char *stringa = (char *) shmat(segment_id, NULL, 0); //mi collego all'area di memoria
        
        printf ("Parola ricevuta dal padre: [%s]\n", stringa);
        shmdt (stringa); //scollego
        
        /* Importante! Dealloco l'area */
        shmctl (segment_id, IPC_RMID, NULL);
        return 0;//termino padre
    }
    
}












