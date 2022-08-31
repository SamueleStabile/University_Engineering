# ESERCIZIO 3
# [6 punti]
# Scrivere una funzione bin2dec che, data una stringa che rappresenta
# un numero binario puro, calcola il suo valore decimale (intero).
# Si gestisca correttamente il caso in cui la stringa di input
# non rappresenti un numero binario.
#
# Ad esempio, se la stringa fosse '11010', il programma
# dovrebbe calcolare il valore intero 26


def converti(num,i):
    num_convertito = num*(2**i)
    return num_convertito

numdecimale = 0 #funge da accumulatore per visualizzare il risultato finale

n=int(input("Inserisci l'indice della stringa"))
for i in range (0,n):
    num=int(input("Inserisci zero o uno"))
    while num !=0 and num!=1 :
        print("Il numero non è corretto, scegliere di nuovo")
        num=int(input("Inserisci o zero o uno"))
    numdecimale = converti(num,i) + numdecimale #nella variabile numdecimale richiamo la funzione (che contiene già la conversione)
#numdecimale lo mettiamo nel for perchè io devo accumulare i risultati delle conversioni dopo ogni ciclo che viene eseguito
print("Il valore convertito è:", numdecimale)


            
            
        
    
        
        
