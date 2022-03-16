	#######################################################
	#--Porgramma per Printare Stringhe - by Samuele Stabile
	#######################################################
		.data
	str: .asciiz "Porgramma per Printare Stringhe - by Samuele Stabile \n\n"

		.text
	#inizializzo registri per il programma
	li $t0, 0x1A75B380
	li $t1, 0

	#altri registri utilizzati per "print"
	li $v0, 4
	la $a0, str
	syscall
	
loop: 	beqz $t0 next
      	andi $t2, $t0, 1
      	beqz $t2, next2
      	addi $t1, $t1, 1
next2: 	srl $t0, $t0, 1
	j loop
	
next: 	li $v0, 1
	move $a0, $t0
	syscall 
      
