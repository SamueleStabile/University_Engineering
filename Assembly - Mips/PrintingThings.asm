#Esercizio 2
#Tradurre nel linguaggio assembler del MIPS il seguente frammento di codice in linguaggio C,
#supponendo che il parametro di ingresso e il valore calcolato dalla funzione vengano passati
#tramite i registri Sa0 e $v0, rispettivamente.
#int a, val;
#...
#printf("dammi il valore di a:\n");
#scanf("%d",&a);
#val=fun(a) 
#printf("il numero e': %d",val);
#...

.data 
mess: .asciiz "dammi il valore di a: "
mess2: .asciiz "\nil massimo e': "

.text

#stampo il messaggio di richiesta
li $v0, 4
la $a0, mess
syscall		#printf("dammi il valore di a:\n");

#Prendo il valore in input
li $v0, 5	#
syscall		# scanf("%d", &v0)

#muovo il risultato da v0 a t0 
move $t0, $v0

#display
li $v0, 4
la $a0, mess2
syscall	
li $v0, 1
move $a0, $t0
syscall
