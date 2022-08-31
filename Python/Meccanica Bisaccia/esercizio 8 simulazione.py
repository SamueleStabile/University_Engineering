# ESERCIZIO 5
# [10 punti]
#
# Definire una funzione:
#    lettura(n,inf,sup)
# che acquisisce n numeri interi da tastiera verificando di volta
# in volta se sono compresi nell'intervallo (inf,sup) estremi
# inclusi. Finché un elemento non è compreso in detto intervallo,
# l'operazione di lettura deve essere ripetuta.
# Rispettare fedelmente l'esempio di esecuzione seguente.
# Effettuare la validazione dei parametri di input, facendo le
# seguenti ipotesi:
# - n, inf e sup sono numeri interi;
# - se inf fosse maggiore di sup, la funzione si comporta come
#   indicato, ma con riferimento all'intervallo chiuso (sup,inf).
# ESEMPIO DI ESECUZIONE che si ottiene lanciando main.py:
#Acquisizione di 4 elementi da tastiera compresi tra 1 e 10:
#Lettura elemento 1: 7
#Lettura elemento 2: 17
#Lettura elemento 2: 12
#Lettura elemento 2: 10
#Lettura elemento 3: 5
#Lettura elemento 4: 1
#Il vettore acquisito è:  [7, 10, 5, 1]

#x= elemento della sequenza di n numeri int
def lettura(n,inf,sup):
    if n<= 0:
        return []
    if (type(n) is int and type(inf) is int and type(sup) is int): #verifa se n,inf,sup sono valori interi
        if inf>sup: #la funzione si esegue normalmente ma bisogna consid,l'intervallo (inf,sup)
            inv=inf #inv è un parametro al quale passo il valore di inf poichè devo inveritire gli estremi dato che mi trovo nel caso di estremo sup < estremo inf
            inf=sup
            sup=inv
        print("Acquisisci %d, elementi compresi tra %d e %d" %(n,inf,sup))
        vet=[]
        for i in range(n):
            x= inf-1 #scrivendo così avremo durante ogni ciclo che x sarà più piccolo di inf
            while (x<inf or x>sup):
                x=int(input("Lettura elemento %d:" % (i+1)))
            vet.append(x)
        return vet

n=int(input("Inserisci il numero di valori"))
inf=int(input("Inserisci l'estremo inf"))
sup=int(input("Inserisci l'estremo sup"))
print(lettura(n,inf,sup))
            
            
                
                
            
            
                    
                    
                
            
                

        
        
