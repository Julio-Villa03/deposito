"""
Scrivi una funzione generatrice di password.

La funzione deve generare una stringa alfanumerica di 8 caratteri
qualora l'utente voglia una password semplice,
o di 20 caratteri ascii qualora desideri una password più complicata.
"""
import string
import random

ALFANUMERICI = string.ascii_lowercase + string.ascii_uppercase + string.digits #valori alfanumerici
ASCII = ALFANUMERICI + string.punctuation #valori alfanumerici e punteggiature, ASCII

def generate_password(lenght:int, charset:str) -> str:
    password = [] #LISTA
    for i in range(0, lenght):
        letter = random.choice(charset) #lettera casuale presa nel charset
        password.append(letter) #aggiunge la lettera presa casuale nella lista password
    return ''.join(password)

#facciamo scegliere all'utente se vuole generare una password complessa o semplice
scelta = input("Complessa o Semplice? C/S: ")
if scelta.lower() == "c":
    password = generate_password(20, ASCII)
elif scelta.lower() == "s":
    password = generate_password(8, ALFANUMERICI)
else:
    password = generate_password(2000, ASCII)

print(password)