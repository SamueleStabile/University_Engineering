def produttoria(vett):
    vett = []

    n = int(input("Numero di Elementi del vettore Vett : "))
    while n<=0 or not(type(n) is int):
        print("Numero di elementi non valido!\n")
        n = int(input("Numero di Elementi del vettore Vett : "))
        
    for i in range(0, n):
        elemento = int(input("Elemento: "))
        while elemento<0:
            print("Solo numeri strettamente positivi\n")
            elemento = int(input("Elemento: "))
            
        vett.append(elemento)
    prod = 1 #1 perché altrimenti non funziona la moltiplicazione
    for i in range (0,n):
        prod = prod * vett[i]
    return prod







vett = []
print("Produttoria: ", produttoria(vett))
    
    
    