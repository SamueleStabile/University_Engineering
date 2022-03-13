
	.text 
li $t0, 0 #x
li $t1, 1 #y
li $t2, 2 #n 
li $t3, 0 #z



do add $t3,$t0,$t1

move $t0, $t1
move $t1, $t3

addi $t2,$t2,1

li $v0, 1
li $a0, $t3
bge $t2,10, do