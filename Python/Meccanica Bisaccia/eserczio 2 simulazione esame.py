# ESERCIZIO 2
# [5 punti]
# Scrivere un programma che, dato un vettore di interi in input,
# ne stampa a video un istogramma orizzontale, rispettando le
# seguenti regole:
# - in caso di elemento positivo, visualizza una stringa di PIU
#   lunga proprio quanto il valore dell'elemento;
# - in caso di elemento negativo, visualizza una stringa di MENO
#   lunga proprio quanto il valore assoluto dell'elemento;
# - in caso di elemento nullo, visualizza la stringa ZERO.
#
# Esempio di esecuzione, se il vettore è [5,-4,0,3,-5,0,2]:
#+++++
#----
#ZERO
#+++
#-----
#ZERO
#++
#

vet=[] #scrivendo così ho creato il mio vettore vuoto che poi dovrò riempire con dei valori che verranno inseriti dall'utente.
n = int(input("Inserisci l'indice del vettore")) # sto chiedendo da quante celle è formato il vettore.
for i in range(0,n): #considero tutti i valori dall'inizio del vettore fino all'indice n-esimo.
    num=int(input("Inserire il numero intero da caricare nel vettore")) #carico un numero intero nel vettore fino ad arrivare al numero n che ho scelto prima
    vet.append(num) #con questo comando vado ad aggiungere a vet[] l'elemento num che ho scelto prima, e poichè il comando si trova nel ciclo for, verrà ripetuto fino ad arrivare al valore di n
for i in range(0, len(vet)): #costruisco un ciclo for per fare la verifica su tutti gli elementi che ho caricato nel vettore
    if vet[i] > 0: # se l'elemento alla posizione i (che all'inizio del ciclo vale 0 ) è > / < / = 0 si eseguirà un istruzione.
        print("+" * vet[i])
    if vet[i] < 0:
        print("-" * (- vet[i]))
    if vet[i] == 0:
        print("ZERO")





    



