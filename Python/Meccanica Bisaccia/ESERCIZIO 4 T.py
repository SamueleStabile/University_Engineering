def somma(vett,pos):
    tot = 0
    pos = []
    vett = []
      
    n = int(input("Numero di Elementi del vettore Vett : "))
    while n<0 or not(type(n) is int):
            print("Errore!")
            n = int(input("Numero di Elementi del vettore Vett : "))

    for i in range(0, n):
        elemento = int(input("Elemento: "))
        while elemento<0 or not(type(n) is int):
            print("Errore!")
            elemento = int(input("Elemento: "))
            
        vett.append(elemento)
        
    n = int(input("Numero di Elementi del vettore Pos : "))
    while n<0 or not(type(n) is int):
        print("Errore!")
        n = int(input("Numero di Elementi del vettore Vett : "))

    for i in range(0, n):
         while elemento<0 or not(type(n) is int):
            print("Errore!")
            elemento = int(input("Elemento: "))
    
         pos.append(elemento)
        
    for i in range (0,n):
        position = pos[i]
        tot = tot + vett[position]
    return tot
    


pos = []
vett = []

print("La somma del vettore tra gli elementi degli indici di pos é:" ,somma(vett,pos))