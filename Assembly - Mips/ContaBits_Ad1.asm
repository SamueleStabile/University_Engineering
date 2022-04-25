	#######################################################
	#--Porgramma per Printare Stringhe - by Samuele Stabile
	#######################################################
		.data
	str: .asciiz "Porgramma per Printare Stringhe - by Samuele Stabile \n\n"
	parola: .word 1023
	
		.text
	#inizializzo registri per il programma
	lw $t0, parola					
	li $t1, 0

	#altri registri utilizzati per "print"
	li $v0, 4
	la $a0, str
	syscall
	
loop: 	beqz $t0, next		#controllo se il registro $t0 é tutto 0
      	andi $t2, $t0, 1	#faccio un and per confrontare LSB di t0 ed 1, assorbendo in t2 il risultato (che sará 1 o 0, in base all LSB di t0)
      	beqz $t2, ifzero	#Se t2 é zero vuol dire che l'LSB corrente di t0 é 0, e quindi non devo contarlo e salto al label ifzero
      	addi $t1, $t1, 1 	#incremento il registro contatore t1 
ifzero: srl $t0, $t0, 1		#Shift logico a destra di $t0 cosí facendo scorro il registro per trovarmi un nuovo valore al LSB e scartare quello vecchio
	j loop			#salto incodizionato al label loop
	
next: 	li $v0, 1		#stampo
	move $a0, $t1		
	syscall 
      
