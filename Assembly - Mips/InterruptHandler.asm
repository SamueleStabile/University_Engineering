###############################################################################
# USER TEXT SEGMENT 
###############################################################################

	.text
main:
       	li $s0, 0x7ffffff0  
       	
loop:   
	li $v0, 34		# stampa un int in formato hex
 	move $a0, $s0
 	syscall
 	
 	li $v0, 11		# stampa un char
 	li $a0, '\n'		# stampa '\n'
 	syscall
	
	addi $s0, $s0, 1	# incrementa in loop infinito
	
	b loop
	
	li $v0, 10
	syscall


###############################################################################
# KERNEL DATA SEGMENT
###############################################################################

	.kdata

OVERFLOW_EXCEPTION: 	.asciiz "===>      Arithmetic overflow at address "
END_MESSAGE:		.asciiz "      <===\n\n" 
		
###############################################################################
# KERNEL TEXT SEGMENT 
###############################################################################

	.ktext 0x80000180  
   
		
	mfc0 $k0, $13 		# Preleva in $k0 il contenuto del registro Cause
	srl $k0, $k0 , 2	# Elimina gli ultimi due bit
	andi $k0, $k0, 0x1f	# Mantiene solo l'exception code	
	bne $k0, 12, esci	# Viene gestito solo l'overflow
	
  	#  Stampa il messaggio di errore
	li $v0, 4
	la $a0, OVERFLOW_EXCEPTION
	syscall
	
	mfc0 $k1, $14		# Preleva in $k1 il contenuto del registro EPC
	
	# Stampa l'indirizzo hex dove si ? verificata l'eccezione
 	li $v0, 34
 	move $a0, $k1
 	syscall

  	#  Stampa la coda del messaggio di errore
	li $v0, 4
	la $a0, END_MESSAGE
	syscall
	
	# Azzera il registro $s0 cos? il conteggio pu? continuare
	li $s0, 0
		

esci: 
	
        mfc0 $k0, $14		# Preleva il contenuto del registro EPC
        addi $k0, $k0, 4 	# Aggiorna l'indirizzo di ritorno             
        mtc0 $k0, $14
	
	eret 			# termina la gestione dell'eccezione e ritorna al processo interrotto
