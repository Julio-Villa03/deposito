"""

Scrivi una funzione che data in ingresso una lista A contenente n parole, 
restituisca in output una lista B di interi che rappresentano la lunghezza 
delle parole contenute in A.

"""
#inizializziamo a e b, 'a' è la lista in ingresso contenente le parole, 'b' è la lista in output contenente la lunghezza delle parole in 'a' in numeri interi  
a=("ciao","sono","Julio")
b = [len(x) for x in a]

b = []
for parola in a:
        lunghezza = len(parola) #len prende il numero dei valori contenenti nella variabile parola
        b.append(lunghezza) #append aggiunge la 'lunghezza' della parola alla lista
print(b)
