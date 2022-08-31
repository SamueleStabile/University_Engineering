# ESERCIZIO 1
# [3 punti]
# Definire il seguente vettore "vet" di 7 elementi:
# ( 5.25  -4  0  3.14  -5.1  0.5  2.5 )
# Calcolarne la media, visualizzandola a video con la precisione
# di 3 cifre decimali, con il seguente messaggio:
# La media del vettore "vet" e' 1.234
# Importante: il messaggio deve essere esattamente identico,
#             anche gli apici e le virgolette!
#             (tranne il valore della media che, naturalmente,
#             va calcolata e visualizzata correttamente)

vet = [5.25, -4, 0, 3.14, -5.1, 0.5, 2.5 ] #abbiamo riempito un vettore
#print(vet[2]) abbiamo stampato la cella 2 del vettore
media = sum(vet)/7
print ('La media del vettore "vet" é ', "%0.3f"%(media)) 
    
