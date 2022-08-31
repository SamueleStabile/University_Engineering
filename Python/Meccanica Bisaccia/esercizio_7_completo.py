# ESERCIZIO 4
# [7 punti]
#
# Definire una funzione:
#    ricerca(x,M)
# che in un vettore M ricerca la prima occorrenza dell'elemento x
# e restituisce la sua posizione, senza utilizzare le funzioni
# né i metodi Python.
# La funzione deve restituire:
# -9 se l'elemento ricercato non è presente in M;
# -1 se x non è un numero;
# -2 se M non è un vettore valido, secondo la definizione matematica.
#
# Suggerimento: individuare e svolgere altri casi di test, oltre
# a quelli presenti nel file main.py
#
# ESEMPIO DI ESECUZIONE n.1 che si ottiene lanciando main.py:
#Elemento da cercare: 0
#L'elemento 0 è nella posizione 4
#
# ESEMPIO DI ESECUZIONE n.2 che si ottiene lanciando main.py:
#Elemento da cercare: 2
#L'elemento 2 non è presente nel vettore


def ricerca(x,M) :
    #VALIDAZIONE
    if not(type(x) is int  or  type(x) is float) : #se NON é vero che x é int o float, restituisci -1
        return -1
    if not( type(M) is list ) :
        return -2
    for i in range(len(M)) :
        if not(type(M[i]) is int  or  type(M[i]) is float) :
            return -2
    #ELABORAZIONE
    for i in range(len(M)) :
        if M[i] == x :
            return i
    return -9
            

x = 0
M = [1,2,3,4,5]

print(ricerca(x,M))

