import random
x = int(input("Inserisci un valore di x: "))

disp = []
dati = []

for i in range (0,15):
    if (x%2 == 1):
        x = x + 2
        disp.append(x)
        
    else:
        x = x + 2
        disp.append(x+1)
        
print(disp)

for i in range (0,20):
    if(i%2==0):
        num = random.randint(0, 100) 
        dati.append(num)
    if(i%2==1):
        num = random.randint(-100, 0) 
        dati.append(num)

print(dati)


nCifre = int(input("Inserisci nCirfre: "))
while nCifre <= 0 or nCifre >= 5:
    print("il valore deve essere compreso tra 0 e 5 esclusi")
    nCifre = int(input("Inserisci nCirfre: "))
if nCifre == 0:
    dati = dati[-1::-1]
    
        

 