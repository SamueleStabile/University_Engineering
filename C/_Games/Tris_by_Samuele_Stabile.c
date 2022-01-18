
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>


int main ()
{
    //dichiarazioni variabili globali
  int  r;
  int riga, colonna;
  int turno = 1;
  char scelta;
  char Player1[15], Player2[15];
  char playersymbol;
  char n;
  char current_player[20];
  bool win = false;

    // dichiarazione matrice
      char matrix[3][3] = {{'1', '2', '3'},
                           {'4', '5', '6'},
                           {'7', '8', '9'}
                                  };    
                                  
                                  
      //Input Nomi dei Players
    printf("----- TRIS the Game ----\n");
    sleep(1);
    printf("-- by Samuele Stabile --\n");
    sleep(2);
    system("clear");
    
    printf("Nome Player [1]: ");
    scanf("%s", Player1);
    
    system("clear");  //pulisce la console
    
    printf("Nome Player [2]: ");
    scanf("%s", Player2);

    system("clear");
    printf("\n-----Simboli Assegnati-----\n"); 
    printf("Player 1: [%s] -->[x]\n", Player1);
    printf("Player 2: [%s] -->[o]\n", Player2);
    printf("---------------------------\n\n"); 
    
    sleep(4);
    
    system("clear");  //pulisce la console

    printf("\n----Let's Start Playing!----\n");    
    
    printf("Questa e' la scacchiera del tris: \n");
//------------stampo matrice----------------
      for (riga = 0; riga < 3; riga++)
	{
	  
	  for (colonna = 0; colonna < 3; colonna++)
	    {
	      printf ("[%c] ", matrix[riga][colonna]);
	    }
	  
	   printf ("\n");

	}
//-------------------------------------------

//-------------CICLO DI GIOCO----------------
      do
	{
	   
	  if ((turno % 2) != 0)
	    {
	      playersymbol = 'x';
	      
	      do
		{
		  while(getchar() != '\n'); //pulisco il buffer togliendo tutti gli spazi vuoti
		  printf ("\n[%s] Numero casella da giocare [x]: ", Player1);
		  scanf ("%c", &n);
		}
	      while (!(n=='1' || n =='2' || n=='3' || n=='4'|| n=='5'|| n=='6' || n=='7' || n=='8'|| n=='9'));
	    }
	  else
	    {
	      playersymbol = 'o';
	      do
		{
		  while(getchar() != '\n'); //pulisco il buffer togliendo tutti gli spazi vuoti
		   printf ("\n[%s] Numero casella da giocare [o]: ", Player2);	
		  scanf ("%c", &n);
		}
	      while (!(n=='1' || n =='2' || n=='3' || n=='4'|| n=='5'|| n=='6' || n=='7' || n=='8'|| n=='9'));
	    }

	  for (riga = 0; riga < 3; riga++)
	    {
	      for (colonna = 0; colonna < 3; colonna++)
		{
		  if (matrix[riga][colonna] == n)
		    {
		      matrix[riga][colonna] =  playersymbol;
		    }
		}
	    }
	    
        for (riga = 0; riga < 3; riga++)
	    {
	      for (colonna = 0; colonna < 3; colonna++)
		{
		  printf ("[%c] ", matrix[riga][colonna]);
		}
	      printf ("\n");

	    }
	    
//checkwin capendo chi sta giocando e chi ha vinto
	   if((matrix[0][0]==matrix[1][1])&&(matrix[1][1]==matrix[2][2])){
	       win = true;
	   }
        else if((matrix[0][2]==matrix[1][1])&&(matrix[1][1]==matrix[2][0])){
              
	       win = true;
        }
        else if((matrix[0][0]==matrix[0][1])&&(matrix[0][1]==matrix[0][2])){
               
	       win = true;
        }	
        else if((matrix[1][0]==matrix[1][1])&&(matrix[1][1]==matrix[1][2])){
               
	       win = true;
        }	
        else if((matrix[2][0]==matrix[2][1])&&(matrix[2][1]==matrix[2][2])){
              
	       win = true;
        }	
        else if((matrix[0][0]==matrix[1][0])&&(matrix[1][0]==matrix[2][0])){
               
	       win = true;
        }
         else if((matrix[0][1]==matrix[1][1])&&(matrix[1][1]==matrix[2][1])){
               
	       win = true;
        }	
        else if((matrix[0][2]==matrix[1][2])&&(matrix[1][2]==matrix[2][2])){
               
	       win = true;
        }	
        
        turno++;
        
	}
      while (turno <= 9 && win == false);
     
    if(turno==10){
        printf("\nPareggio");
    }
    
    if(playersymbol == 'x' && win == true){
    printf("\n%s HA VINTO!", Player1);
    }
    else if (playersymbol == 'o' && win == true){
    printf("\n%s HA VINTO!", Player2);   
    }
     //turno qui esce turno=10
    


      return 0;
    
}

