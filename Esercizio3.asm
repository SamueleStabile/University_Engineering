#-----------------Samuele Stabile----------------------
#Tradurre in Assembly MIPS il seguente programma C

#int vet1[]={1,7,2,5,8,3,6,4};
#int riemp1=8;
#int main(){
#int i,n1,np;
#n1=riemp1;
#np=0;
#for(i=0;i<n1;i++)
#if(vet1[i]%2==0)
#np=np+1;
#}
#printf("Numero pari: ");
#printf("%d",np);
#printf("\n");
#exit(0);
#}
.data
vett: .word 1,7,2,5,8,3,6,4
num: .word 8
prompt: .asciiz "I numeri pari sono: "
n: .asciiz "\n"

.text
	lw $t0, num # n1
	li $t1, 0 #np
	li $t2, 0 #i
	
	la $t3, vett
	
for: 	bge $t2,$t0, end
	lw $t4,($t3)
	li $t5, 2
	andi $t6,$t4,1
	beq $t6, 1, else	
	addi $t1, $t1, 1 #np++
else: 	addi $t2, $t2, 1 #i++
	addiu $t3,$t3,4 #incremento il pointer del vettore
	j for

end: 	li $v0, 4
     	la $a0, prompt 	
     	syscall
     
     	li $v0, 1
     	move $a0, $t1 	
     	syscall
     
     	li $v0, 4
     	la $a0, n	
     	syscall
     
     	li $v0, 10
     	syscall	
	
	
	
	
	
	
	
	
	
	