#primo programma MIPS Samuelo Stabilo	
	.text
li $t0, 1
li $t1, 2

add $t2, $t1, $t0

li $v0, 10
syscall  #syscall legge il valore del registro $v0 e ne esegue il corrispondente comando

li $v0, 1
li $a0, 69
syscall 