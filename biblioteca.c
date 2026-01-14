//biblioteca.c
//stile di programmazione: Camel Case + Almann

// variabili e structure per la gestione di una biblioteca

#include <stdio.h>

#define MAX_LIBRI 100
#define MAX_STR   20
#define MAX_COPIE 5
#define MAX_PRESTITI 5

typedef struct
{
    char giorno[MAX_STR];
    char mese[MAX_STR];
    char anno[MAX_STR];
}Data;

typedef enum
{
    GENERE_MATEMATICA = 0,
    GENERE_FISICA = 1,
    GENERE_STORIA = 2,
    GENERE_INFORMATICA = 3,
    GENERE_LETTERATURA = 4
}Genere;

typedef enum
{
    COPY_DISPONIBILE = 0,
    COPY_PRESTATA = 1,
    COPY_DANNEGGIATA = 2
}CopyStatus;

typedef struct
{
    Utente utente;
    Data dataInizioPrestito;
    Data dataFinePrestito;
    int restituito; /* 0 = no, 1 = s� */
}Prestito;

typedef struct
{
    char codiceCopia[MAX_STR];
    Prestito prestiti[MAX_PRESTITI];
    CopyStatus stato;
    int numPrestiti;
}Copia;

typedef struct
{
    int codiceId;
    char titolo[MAX_STR];
    char autore[MAX_STR];
    Data annoPubblicazione;
    Genere genere;
    Copia status[MAX_COPIE];
    int numCopie;
}Libro;

typedef struct
{
    char nome[MAX_STR];
    char cognome[MAX_STR];
    int codiceTessera;
}Utente;

typedef struct
{
    char nome[MAX_STR];
    Libro libri[MAX_LIBRI];
    int numLibri;
}Biblioteca;
