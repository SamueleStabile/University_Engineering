.data

vet: 	.space 40 #alloco uno spazio dedicato della dimensione di 40 byte a partire dall'indirizzo corrente  

.text
	la $t0,vet 	#carico l'indirizzo dello spazio con label "vet"
	li $t1,10	#condizione limite nel for 	
	li $t2,0	#contatore cicli nel for
for: 	bge $t2,$t1,fine	
	addi $t3,$t2,2	# t3 = t2 + 2
	sw $t3,($t0)	# store word t3 in offset(t0), il valore di t3 vado a metterlo nello spazio di indirizzo t0 (vett[t0])
	addiu $t0,$t0,4 # incremento il puntatore di indirizzo del vettore di 4, perchè ogni word caricata pesa 4 byte
	addiu $t2,$t2,1 # incremento il contatore del ciclo
	j for		#jumpo al for 
fine:	li $v0,10	#codice operativo per terminare il programma
	syscall
	
#------------------------ EQUIVALENTE IN C ---------------------------
#	int vet[10];
#
#	int main(){
#		int i;
#		for(i=0;i<10;i++)
#		vett[i]=2+i;
#	}
