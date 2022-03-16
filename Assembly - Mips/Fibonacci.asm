
	.text 
	#inizializzo registri
li $t0, 0 #x
li $t1, 1 #y
li $t2, 2 #n 
#z



while: bge $t2,10, next #verifica la condinzione, in caso positivo esce su next, altrimenti continua il ciclo fino a "J while" dove torna indietro

add $t3,$t0,$t1	

move $t0, $t1
move $t1, $t3

addi $t2,$t2,1	#incremento il registro contatore $t2 di 1 (t2++)

li $v0, 1 #riempio il resgistro di sistema v0 con il codice 10 per stampare successivamente con syscall
move $a0, $t3 #riempio il registro con il valore della successione di Fibonacci per stamparla in I/O
syscall


j while #jump sul label while

next: li $v0, 10
syscall

.ascii "pippo"
