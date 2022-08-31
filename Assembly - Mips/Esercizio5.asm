.data
vet1: .word 1,7,2,5,8,3,6,4
rie1: .word 8
vet2: .space 40
space: .asciiz " \n"
.text
 main: li $t0,0 	# contatore i = 0
       li $t1,0  	# contatore numeri dispari n2
       lw $t2,rie1 	# dimensione n1
       la $t3 ,vet1 	# address prima casella vet1
       la $t6 ,vet2	# address prima casella vet2

for:   bge $t0,$t2,next
       lw $t4 ,($t3)
       andi $t5,$t4,1
       bne $t5,1,else
       sw $t4 ,($t6) #assorbomimento di vet1 in vet2  vet2[i]= vet1[i]
       addi $t1,$t1,1 #incremento di n2
       addi $t6,$t6,4 #incremento di 4 del puntatore di vet2 che serve a scorrere word per word
 else: addi $t0,$t0,1 #incremento di i
       addi $t3,$t3,4 #incremento di 4 del puntatore di vet1 che serve a scorrere word per word
       j for 

next: jal vetprint
      li $v0,10
      syscall


vetprint:  move $s0,$t1 
           la $s1,vet2
           li $s2,0
     for1: bge $s2,$s0,else2
           lw $s3,($s1)
           li $v0,4
           la $a0,space
           syscall
           li $v0,1
           move $a0,$s3
           syscall
           addi $s2,$s2,1
           addi $s1,$s1,4
           j for1
    else2: jr $ra

