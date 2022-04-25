#Esercizio 1
#Tradurre nel linguaggio assembler del MIPS la seguente funzione in linguaggio C, supponendo che i
#parametri di ingresso e il valore calcolato dalla funzione vengano passati sullo stack e che
#nell’implementazione assembler si possano usare solo i registri $s.
#int massimo(int x, int y, int z)
#{
#int max=x;
#if (y>max) max=y;
#if (z>max) max=z;
#return max;
#}

.data
x:	.word 90
y:	.word 9
z:	.word 1

.text

massimo:lw $s0, x # max = x
	lw $s1, y # carico y
	lw $s2, z # carico z
	
	
	bgt $s1, $s0, max 	#if (y > max) 
	j next
max:	lw $s0, y		#then max = y;
	
next:	bgt $s2, $s0, max2	#if (z > max) 
	j end
max2:	lw $s0, z		#then max = z;
	
	
end:	li $v0, 1
	move $a0, $s0
	syscall
	

