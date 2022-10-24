    
def stampa_voti (voti):
  for i in range (0,len(voti)): #for che scorre il vettore di voti
        if voti[i]>17 and voti[i]<=30: # controllo se l'esame é superato
            print(i+1,') ',voti[i])
            
        elif voti[i]<18 and voti[i]>=0: #se l'esame non é superato restituisco RESPINTO
            print(i+1,') ','RESPINTO')
            
        elif voti[i]>30:
            print(i+1,') ','30 E LODE')
        elif voti[i]<0:
            print(i+1,') ','***')

voti = []
num_voti = int (input('Quanti voti vuoi inserire?: '))
while num_voti<0: # controllo che il valore in input sia corretto
    print('il numero deve essere positivo')
    num_voti = int(input('Quanti voti vuoi inserire?: '))
    
for i in range(0, num_voti):
    temp = int(input('Inserisci Voto: '))
    voti.append(temp)

print(voti)

stampa_voti(voti)
    