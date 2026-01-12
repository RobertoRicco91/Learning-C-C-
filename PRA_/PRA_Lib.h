/*dichiarazione strutture*/

typedef struct
{
    char targa[7];
    char marca[15];
    char modello[20];
    int cilindrata;
    float potenza;
    char categoria[4];
}Motoveicolo;

typedef struct
{
    char nome[30];
    char cognome[40];
    char cfu[16];
}Proprietario;

typedef struct
{
    Proprietario* proprietario;
    Motoveicolo* motoveicolo;
}VocePRA;

typedef struct
{
    VocePRA elementi[1000];
    int n_elementi;
}PRA;
