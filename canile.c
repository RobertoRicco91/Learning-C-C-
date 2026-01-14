//canile.c
//stile di programmazione: Camel Case + Almann

// variabili e structure per la gestione di un canile

#include <stdio.h>

#define MAX_CANI 100
#define MAX_STR   20
#define MAX_VACCINAZIONI 10
#define MAX_ADOZIONI 5

typedef enum
{
    TAGLIA_PICCOLA = 0,
    TAGLIA_MEDIA = 1,
    TAGLIA_GRANDE = 2
} Taglia;

typedef struct
{
    int giorno;
    int mese;
    int anno;
}Data;

typedef struct
{
    char azione[MAX_STR];
    char principioAttivo[MAX_STR];
    char patologia[MAX_STR];
    Data dataSomministrazione;
}Vaccino;

typedef struct
{
    char via[MAX_STR];
    char citta[MAX_STR];
    int numero;
    int cap;
}Indirizzo;

typedef struct
{
    char nome[MAX_STR];
    char cognome[MAX_STR];
    Indirizzo indirizzo;
}Adottante;

typedef struct
{
    Adottante adottante;
    Data dataAdozione;
}Adozione;

typedef struct
{
    char nome[MAX_STR];
    char razza[MAX_STR];
    Taglia taglia;
    int anni;
    Vaccino vaccinazioni[MAX_VACCINAZIONI];
    int nVaccinazioni;
    Adottante adottanti[MAX_ADOZIONI];
    int nAdozioni;
}CANE;

typedef struct
{
    char nome[MAX_STR];
    CANE cani[MAX_CANI];
}Canile;



