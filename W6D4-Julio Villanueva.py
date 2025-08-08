import math #libreria matematica

#creiamo una funzione per la scelta dell'utente della figura che vuole sapere il perimetro e l'area
def scelta_utente(scelte:list[int]) -> int:
    print("\nScegli tra le figure: ")
    if 1 in scelte:
        print("\t1) Perimetro e Area del Quadrato")
    
    if 2 in scelte:
        print("\t2) Perimetro e Area del Rettangolo")
    
    if 3 in scelte:
        print("\t3) Perimetro e Area del Cerchio")

#si fa un ciclo while per essere sicuri che il valore in input sia compreso tra i valori scelte
    ok = False
    while not ok:
        try:
            valore:int = int(input(">>> "))
            if valore in scelte:
                ok = True
            else: print(f"Il tuo valore ({valore}) non va bene!")
                
        except ValueError:
            print("Dammi un valore numerico!")
    
    return valore

#valore in input scelto dall'utente per il valore del lato
lato:float = float(input("Inserisci il lato: "))

#inizializzazione dei parametri area, perimetro e scelte
perimetro:float = 0.0
area:float = 0.0
scelte = [1,2,3]

#in questo modo facciamo si che il valore scelto verrà rimosso dalla lista
while len(scelte) > 0:
    valore = scelta_utente(scelte)
    scelte.remove(valore)

    #Quadrato
    if valore ==1:
        perimetro = lato * 4
        area = lato * lato

    #Rettangolo : lato = base, altezza = metà di lato
    elif valore == 2:
        perimetro = lato * 3
        area = lato * (lato/ 2)

    #Cerchio : lato = raggio
    elif valore == 3:
        perimetro = lato * 2 * math.pi
        area = lato ** 2 * math.pi

    else: 
        raise Exception("Eccezione Impossibile")
    
#stampa del risultato 
    print(f"Risultato Perimetro: {perimetro:.2f}")
    print(f"Risultato Area: {area:.2f}")