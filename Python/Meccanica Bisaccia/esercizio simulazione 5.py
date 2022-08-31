# ESERCIZIO 2
# [4 punti]
#
# Dati i vettori v1 e v2 dell'esercizio 1, creare:
# - il vettore v3, che è il vettore v2 ordinato in senso
#   decrescente;
# - il vettore v4, che contiene tutti gli elementi di posto
#   pari di v1.
#
# Visualizzare, infine, la somma degli elementi di v3 con la
# precisione di tre cifre decimali.
# (Nota: si DEVE rispettare la proprietà di GENERALITA' degli
# algoritmi)
#
# DA COMPLETARE RIPORTANDO QUI IL CODICE


v_app =[] #vettore d'appoggio
v2= [1, 2, 4, 5, 6, 3, 2, 4, 1, 1, 3, 5, 3, 2, 6]
v2.sort()
print(v2)
c=14
for i in range (0,15):
    n=v2[c]
    v_app.append(n)
    c -= 1
print(v_app)


v1 =[1, 2, 4, 5, 6, 3, 2, 4, 1, 1, 3, 5, 3, 2, 6]
v4=[]
c=1#contatore per indicare le posizioni pari
for i in range (0,15):
    if ( c%2==0 ):
        v4.append(v1[i])
    c +=1
print(v4)
        


    
    

    
    
    