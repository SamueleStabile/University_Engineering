# ESERCIZIO 1
# [4 punti]
#
# Definire un vettore v1 di 15 elementi equispaziati tra 1 e 6.
# Generare un vettore v2 di 15 numeri reali casuali compresi
# tra 1 e 6.
#
# (Nota: si DEVE rispettare la proprietà di GENERALITA' degli
# algoritmi)
#
# DA COMPLETARE RIPORTANDO QUI IL CODICE


v1=[]
i=15
n = 1 #accumulatore per contare le posizioni pari
p=0
while ( p < 6 ):
    if (n % 2 != 0): #il simbolo n%2 significa che io vado a valutare il resto della divisione tra n e 2
        elem=input("Inserisci l'elemento del vettore")
        v1.append(elem)
        p +=1
        n +=1
    else :
        s=" "#variabile usata per indicare le posizioni mancanti
        v1.append(s)
        n += 1
        p +=1
while(p > 5 and p < i):
    elem=input("Inserisci l'elemento del vettore")
    v1.append(elem)
    p +=1
print(v1)
    

v2=[]
for i in range (0, 15):
    n=int(input("Inserisci il numero"))
    while(n>1 and n<=6):
        v2.append(n)
        n+=1
print(v2)
    

