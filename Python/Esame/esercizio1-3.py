import random #includo random per generare successivamente un vettore casuale

def stampa_voti(voti, num_voti):
    
    for i in range (0,len(voti)): #for che scorre il vettore di voti
        if voti[i]>17 and voti[i]<=30: # controllo se l'esame é superato
            print(voti[i])
        elif voti[i]<18 and voti[i]>=0: #se l'esame non é superato restituisco RESPINTO
            print('RESPINTO')
        elif voti[i]>30:
            print('30 E LODE')
            

#main
#input di n voti
num_voti = int (input('Quanti voti vuoi inserire?: '))
while num_voti<0: # controllo che il valore in input sia corretto
    print('il numero deve essere positivo')
    num_voti = int(input('Quanti voti vuoi inserire?: '))
    

voti = [ random.randint(0,31) for i in range(num_voti)] #genero il vettore casuale nel range 0, 31
print('VETTORE VOTI:', voti) #controllo il riempimento del vettore

stampa_voti(voti, num_voti) #richiamo la funzione

        
