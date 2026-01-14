//ospedale.c
//stile di programmazione: Camel Case + Almann

// variabili e structure per la gestione di un ospedale

#include <stdio.h>

#define MAX_PASSEGGERI 100
#define MAX_STORICO 1000
#define MAX_STR   20
#define MAX_VOLI 10
#define MAX_GATE 10

typedef struct
{
    int giorno;
    int mese;
    int anno;
}Data;

typedef struct
{
    int ore;
    int minuti;
}Ora;

typedef enum
{
    PROGRAMMATO = 0,
    RITARDO = 1,
    CANCELLATO = 2,
    DECOLLATO = 3,
    ATTERRATO = 4
}StatusVolo;

typedef struct
{
    char idPasseggero[MAX_STR];
    char nome[MAX_STR];
    char cognome[MAX_STR];
    char numeroPassaporto[MAX_STR];
    char nazionalità[MAX_STR];
}Passeggero;

typedef struct
{
    char codiceVolo[MAX_STR];
    char compagniaAerea[MAX_STR];
    char cittaPartenza[MAX_STR];
    char cittaArrivo[MAX_STR];
    Data dataPartenza;
    Data dataArrivo;
    Ora oraPartenza;
    Ora oraArrivo;
    StatusVolo statusVolo;
    Aereomobile aereomobile;
    // Passeggero* passeggeriImbarcati[MAX_PASSEGGERI];
    // int numeroPasseggeri;
    // Passeggero* storicoPasseggeri[MAX_STORICO];
}Volo;

typedef struct
{
    char idPasseggero[MAX_STR];
    char codiceVolo[MAX_STR];
    /* Attributi della relazione */
    char posto[MAX_STR];
    char classe[MAX_STR];
    int checkinEffettuato; /* 0 = no, 1 = sì */
}Prenotazione;

typedef struct
{
    char codiceGate[MAX_STR];
    Volo voloAssegnato[MAX_VOLI];
    int numeroVoli;
    // Volo* storicoVoli[MAX_STORICO];
}Gate;

typedef struct
{
    char codiceTerminal[MAX_STR];
    Gate gateAssegnati[MAX_GATE];
    int numeroGate;
}Terminal;

typedef struct
{
    char modello[MAX_STR];
    int capacitaPasseggeri;
}Aereomobile;

typedef struct
{
    char nome[MAX_STR];
    Terminal terminal[MAX_STORICO];
    int numeroTerminal;
    // Aereomobile aereomobili[MAX_STORICO];
    // Volo voli[MAX_STORICO];
    // Gate gates[MAX_STORICO];
}Aereoporto;

typedef struct
{
    Passeggero passeggeri[MAX_PASSEGGERI];
    int numeroPasseggeri;
}ArchivioPasseggeri;

typedef struct
{
    Prenotazione prenotazioni[MAX_STORICO];
    int numeroPrenotazioni;
}ArchivioPrenoazioni;


