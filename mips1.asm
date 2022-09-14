.data
vet: .word 1,7,2,0,8,-3,6,0
riemp: .word 8
msg: .asciiz "Somma: "


.text
la $t0,vet
lw $t1, riemp #riemp = 8
li $t2, 0 #i
li $t3, 0 #somma

loop:	
	lw $t6, ($t0) #prendo il la word dal vettore
	add $t3,$t3, $t6 # somma=+vet[i]
	addi $t2,$t2,1 #i++
	slti $t4, $t3, 10 # se somma<10, t4 = 1
	slt $t5, $t2, $t1 # se i <8, t5 = 1
	addi $t0,$t0,4 
	bnez $t4, loop
	bnez $t5, loop

li $v0,4
la $a0,msg
syscall
li $v0,1
move $a0,$t3
syscall
