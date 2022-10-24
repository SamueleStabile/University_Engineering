def numprimi(leng):
    for i in range (0, leng):
        primi.append(i+1)
        
    print(primi)
    
    p  = int(input('Inserisci P: '))
    
    while (p!=leng):
        for i in range(0,leng):
            if primi[i]%p == 0:
                primi[i] = -1
        p = p + 1
    print(primi)
    
    for i in range (0, leng):
        if (primi[i]!=-1):
            primi2.append(primi[i])
    
    print(primi2)
  
    
            


primi = []
primi2 = []
leng = int (input('Inserisci N: '))
while leng<0: # controllo che il valore in input sia corretto
    print('il numero deve essere positivo')
    leng = int(input('Inserisci N: '))
    
numprimi(leng)

    
