#######################################################
#--Porgramma per Printare Stringhe - by Samuele Stabile
#######################################################
	.data
	
 str: .asciiz "Porgramma per Printare Stringhe - by Samuele Stabile \n\n"
 Nome: .asciiz "Samuele\n"
 Cognome: .asciiz "Stabile \n"
 Age: .asciiz "19 \n"
 Sesso: .asciiz "Si"
 
	.text
	
li $v0, 4
la $a0, str
syscall
la $a0, Nome
syscall
la $a0, Cognome
syscall
la $a0, Age
syscall
la $a0, Sesso
syscall
