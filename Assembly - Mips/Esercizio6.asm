#########################################################
#---------------Samuele Stabile-------------------------
#TRACCIA: Conta i numeri pari in un vettore tramite due funzioni:
# contapari()
# vetprint()
.data
vet1: .word 1,7,8,5,2,3,4,6	# ELEMENTI VETTORE 1
riemp1: .word 8			# DIMENSIONE VETTORE 1
vet2: .space 40			# SPAZIO ALLOCATO AL VETTORE 2 (nelementi*4) 1 = byte | 4 byte = word | 1 elemento = 1 word
space: .asciiz " \n"
.text
main:	la $a1, vet1 		# inizializzo vet1
	lw $a2, riemp1 		# n1 = riemp1
	la $a3, vet2 		# inizializzo vet2
	li $s0, 0 		# inizializzo n2 = 0 (CONTATORE ELEMENTI V2 OR CONTATORE NUMERI PARI)
				# preparo gli argomenti per contapari
	jal contapari
	
	la $a1, vet2		#punto la prima casella di vet2
	jal vetprint
	
	li $v0, 10		#shuttig down program
	syscall
	
contapari:	li $t1, 0    		# i = 0
	for:	bge $t1, $a2, next 	# if (i>=n1)
		lw $t2, ($a1) 		# prendo valore di vet1
		andi $t3,$t2,1		# vedo se é pari
		bne $t3, 0, else	# if t3=1
		sw $t2,($a3)	
		addi $s0, $s0, 1	# incremento n2
		addi $a3, $a3, 4	# incremento il pointer di v2 di 4
	else:	addi $t1,$t1,1		# i++
		addi $a1,$a1,4		# incremento il pointer di v1 di 4
	  	j for
	next: 	jr $ra

vetprint:	li $t1, 0 # i = 0
	for2:	bge $t1,$s0, next2 	# i<n	$s0 sarebbe il valore massimo di v2
		lw $t2, ($a1)		# prendo in t2 il valore puntato di a1 (che sarebbe vet2 in questo caso) (precaricato prima della chiamata a funzione)
		
		#stampo numero in vet2
		li $v0,4
           	la $a0,space
           	syscall
		#stampo "\n"
		li $v0,4
           	la $a0,space
           	syscall
           	
		addi $a1,$a1,4	#incremento vet2 pointer
		addi $t1,$t1,1	# i++
		j for2		
	next2:  jr $ra		# ritorno al "jal" chiamante
		
	
	
