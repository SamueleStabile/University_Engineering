.data
vet: 	.word 7,5,-2,4  #riempio 4 word con i valori 7,5,-2 e 4 con indirizzo corrente
num: 	.word 4		#carico una word con 4 di valore

.text
	la $t0,vet 	#assorbo l'indirizzo della word di label "vet"
	lw $t1,num 	#assorbo il contenuto della word "num"
	li $t2,0	
	li $t3,0
for: 	bge $t2,$t1,fine
	lw $t4,($t0)
	addi $t3,$t3,$t4
	addiu $t0,$t0,4
	addiu $t2,$t2,1
	j for
fine:	 move $a0,$t3
	li $v0,1
	syscall
	li $v0,10
	syscall
#------------------------ EQUIVALENTE IN C ---------------------------
#	int vet[]={7,5,-2,4};
#	int num=4;
#	
#	int main(){
#		int i,n,s,x;
#		s=0;
#		num=n;
#			for(i=0;i<n;i++){
#			x=vet[i];
#			s=s+x;
#			}
#		printf("%d",x);
#		}