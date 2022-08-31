.data
msg: .asciiz "Inserire i Numeri da convertire: "
number: .space 32

.text	
li $s5, '\n'

	la $s0, msg
forstampa: 	
	lbu $s1, ($s0)
	beq $s1, $0, exit
	move $a0, $s1 
	jal putc
	addi $s0, $s0, 1
	j forstampa
exit:
# LETTURA DEL INTERO
la $s0, number
for_lettura:
    jal getc
    beq $v0, $s5, end_for_lettura
    sb $v0, ($s0)
    addiu $s0, $s0, 1
    
    
    
    li $a0, '*'
    jal putc
    j for_lettura
end_for_lettura:
sb $0, ($s0)
 
li $v0, 10
syscall



#putc display

putc:
     li $t0, 0xFFFF0008 
	putloop:
     		lw $t1, ($t0)
     		andi $t1, $t1, 1
     		beq $t1, 0, putloop
     
     	sw $a0, 4($t0) #0xFFFF000C
     	jr $ra    
     	
# GESTIONE DELLA KEYBOARD
getc:
#    v0 = byte ricevuto
    li $t0, 0xffff0000    
    gcloop:
        lw $t1, 0 ($t0)
        # LSB ctrl reg ==> READY
        andi $t1,$t1, 1
        beq $t1, $0, gcloop
        #SI
    lw $v0, 4($t0)
    jr $ra
 
	
