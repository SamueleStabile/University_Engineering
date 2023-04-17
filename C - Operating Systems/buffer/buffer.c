#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <sys/stat.h>

#define MAX_SIZE 200

int main (){
    
  int segment_id = shmget (IPC_PRIVATE, MAX_SIZE, S_IRUSR | S_IWUSR);
  
  if (segment_id < 0)
    {
      printf ("Errore in shmget\n");
      return 1;
    }
    
  pid_t pid = fork ();
  
  if (pid < 0){
      printf ("Errore nella fork\n");
      /* Importante! Dealloco l'area */
      shmctl (segment_id, IPC_RMID, NULL);
      return 1;
    }
    
  else if (pid == 0){
      /* Processo figlio */
      char *p = (char *) shmat (segment_id, NULL, 0);
      strcpy (p, "Salve mondo!");
      shmdt (p);
      return 0;
    }
    
  else{
        /* Processo padre */
        /* Aspetto che il figlio sia terminato
        * prima di accedere alla memoria
        * (sincronizzazione)! */
      wait (NULL);
      char *stringa = (char *) shmat (segment_id, NULL, 0);
      printf ("Ho ricevuto: %s\n", stringa);
      shmdt (stringa);
        /* Importante! Dealloco l'area */
      shmctl (segment_id, IPC_RMID, NULL);
      return 0;
    }
}

