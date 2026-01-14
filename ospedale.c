//ospedale.c
//stile di programmazione: Camel Case + Almann

// variabili e structure per la gestione di un ospedale

#include <stdio.h>

#define MAX_PAZIENTI 100
#define MAX_DESCRIZIONE 250
#define MAX_STR   20
#define MAX_POSTI_LETTO 10
#define MAX_REPARTI 10

typedef struct
{
    int giorno;
    int mese;
    int anno;
}Data;

typedef enum
{
    FARMACOLOGIA = 0,
    FISIOTERAPIA = 1,
    CHIRIRURGIA = 2,
    DIAGNOSTICA = 3,
    ALTRO = 4
}TipoFarmaco;

typedef enum
{
    GRUPPO_A_POS = 0,
    GRUPPO_A_NEG = 1,
    GRUPPO_B_POS = 2,
    GRUPPO_B_NEG = 3,
    GRUPPO_AB_POS = 4,
    GRUPPO_AB_NEG = 5,
    GRUPPO_0_POS = 6,
    GRUPPO_0_NEG = 7
} GruppoSanguigno;

typedef enum
{
    RH_POSITIVO = 0,
    RH_NEGATIVO = 1
} FattoreRh;

typedef struct
{
    GruppoSanguigno gruppoSangue;
    FattoreRh rh;
}InfoSangue;

typedef struct
{
    TipoFarmaco tipoFarmaco;
    char descrizione[MAX_DESCRIZIONE];
    char nomeMedico[MAX_STR];
    Data dataInizio;
    Data dataFine;
    char dosaggio;
    int conclusa;
}Terapia;

typedef struct
{
    Data dataDimissione;
    char diagnosiDimissione[MAX_DESCRIZIONE];
    char terapiaDomiciliare[MAX_STR];
}Dimissione;

typedef struct
{
    Paziente* paziente;
    Reparto* repartoRicovero;
    Data dataRicovero;
    Dimissione infoDimissione;
    Terapia terapie[MAX_STR];
    int nTerapie;
    char motivoRicovero[MAX_STR];
}Ricovero;

typedef struct
{
    char nome[MAX_STR];
    char cognome[MAX_STR];
    char codiceFiscale[MAX_STR];
    int anni;
    InfoSangue infoSangue;
    Ricovero ricoveri[MAX_STR];
    int nRicoveri;
    Dimissione infoDimissione[MAX_STR];
    int nDimissioni;
    Terapia terapie[MAX_STR];
    int nTerapie;
    char diagnosi[MAX_STR];
}Paziente;

typedef struct
{
    char nome[MAX_STR];
    int postiLetto[MAX_POSTI_LETTO];
    Paziente pazienti[MAX_PAZIENTI];
    int nPazientiRicoverati;
}Reparto;

typedef struct
{
    char nome[MAX_STR];
    Reparto reparti[MAX_REPARTI];
    int nReparti;
}Ospedale;
