#include <stdio.h>
#include <ctype.h>
/*Presentare un set di domande allʼutente a risposta multipla (almeno 3 risposte a domanda)
  Ho fatto un'altra funzione per la partita cosi da inserire le domande
*/
int partita(){
    int score = 0;
    printf("\nDomanda 1: Come si chiama il docente di pratica? ");
    printf("\nA) Marco\nB) Giovanni\nC) Valerio\n");
    char risposta;
    scanf("%s", &risposta);

    //Valutare la risposta utente per ogni domanda ed aggiornare una variabile «punteggio in caso di risposta esatta»
    if (toupper(risposta)=='C'){
        printf("\nRisposta corretta!");
        score ++;
    }
    else {
        printf("\nRisposta sbagliata! :( ");
    }
    
    printf("\nDomanda 2: A che corso stiamo partecipando? ");
    printf("\nA) Cybersecurity Analyst\nB) Data Analyst\nC) Front-end e Back-end\n");
    scanf("%s", &risposta);
    if (toupper(risposta)=='A'){
        printf("\nRisposta corretta!");
        score ++;
    }
    else {
        printf("\nRisposta sbagliata :( ");
    }
       
    printf("\nDomanda finale: Chi non è un vero hacker? ");
    printf("\nA) White Hat\nB) Red Hat\nC) Black Hat\n");
    scanf("%s", &risposta);
    if (toupper(risposta)=='B')
    {
        printf("\nRisposta corretta!");
        score ++;
    }
    else{
        printf("\nRisposta sbagliata :( ");
    }

//Scrivere a schermo a fine partita il punteggio totalizzato dal giocatore corrente
    printf("\nGrande! Hai fatto %d punto/i", score);
    printf("Se vuoi rigiocare riavvia il gioco :)");
    return score;
    
}

int main (){
//presentare una rapida introduzione all'utente con lo scopo del programma

    char *intro = "Ciao! Benvenuto al giochino Domanda e Rispondi :), rispondi alle domande che ti verranno fatte, alla fine vedrai il punteggio totalizzato, BUONA FORTUNA!";
    printf("%s\n", intro);
  //Mostrare allʼutente un menu di scelta iniziale tra: A Iniziare una nuova partita; B Uscire dal gioco

    char *promt_scelta = "Scegli tra: \n\tA) Iniziare una nuova partita\n\tB) Uscire dal gioco";
    printf("%s\n", promt_scelta);

    //Ricevere in input la scelta dellʼutente

    char scelta;
    printf("\nComunicami la tua scelta: ");
    scanf("%c", &scelta);
  

    char *nome;
    //Creare o meno una nuova partita in base allʼinput utente
    int totalscore = 0;
    switch (tolower(scelta))
    {
    case 'a':
        printf("\nInserisci il tuo nome: ");
        scanf("%s", &nome);        
        printf("\nCiao, %s! GIOCHIAMO!", &nome);
        //esercizio facoltativo: memorizzare il punteggio totale per partita, con += assegniamo il valore del punteggio ritornato nella funzione partita al valore totalscore
        totalscore += partita();
        printf("\nIl tuo punteggio totale è: %d", totalscore);
        break;
    case 'b':
        printf("Arrivederci!");
        return 0;
    default:
        printf("Scelta sbagliata");
        break;
    }
   
    
    return 0;

}
