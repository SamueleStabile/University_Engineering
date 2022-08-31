#int fun(int v1[], int v2[], int v3[], int dim);

# int a[5], b[5],c[5];

 
#void main {
#       int dim=5;
#      …
#     somma = fun(a,b,c,dim)
#      ….
#
#}
#int fun (int v1[], int v2[], int v3[], int size) {
#   int somma=0, i;
# for (i=0, i<size, i++) 
#  if(v1[i] > 0){
#       somma=somma+v1[i];
#        v1[i]=v2[i];
#     }
#      else
 #            v1[i]=v3[i];
#
 #   return somma;
#}
.data

return: .space 4
vet1: .word 1 -1 2 -2
vet2: .space 20
vet3: .space 20
dim: .word 5

.text
main:
	la $s0, return # return 
	la $s1, vet1 # vettore 1

	li $t0, 0 # i
for:    bge $t0, 4, next:
	addi $sp, $sp, -4
	sw $s1, ($sp)
	addi $t0,$t0,1
	addi $s1,$s1, 4
	
next:  
	
	la $s2, vet2 # vvett2
	la $s3, vet3 # vett3
	lw $s4, dim  #DIMENSIONE
	
	

