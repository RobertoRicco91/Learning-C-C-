/*
PRA.c

Scrivere un programma in C
che:
1) Definiste le strutture
necessarie in una libreria
2) Consente di inserire voci
all’interno del PRA e
visualizzarle

- Definire tipi di dati per un PRA
- Definire tipi di dati per una persona
- Definire tipi di dati per un motoveicolo
- Il tipo di dati VocePRA rappresenta una singola voce nel registro automobilistico; una voce si compone di 2 elementi: i dati del proprietario del mmotoveicolo e i dati del motoveicolo stesso.
- Il tipo dati PRA rappresenta untipo adatto a contenere più voci del PRA. Questo tipo di dati è un elnco di voci del PRA(si suppone che un PRA non possa contenere più di 10.000 voci).Più un contatore che dice quante voci sono effettivamenete presenti nel PRA.

Stile di programmazione: Camel Case + Almann
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PRA_Lib.h"

#define MAX 1000

/*dichiarazione funzioni*/
int menu();
void inserisciVocePRA(PRA *pra, Motoveicolo motoVeicoli[MAX], Proprietario proprietari[MAX], int* n_motoVeicoli, int* n_proprietari);
void visualizzaPRA(PRA *pra, Motoveicolo motoVeicoli[MAX], Proprietario proprietari[MAX]);

/*programma*/
void main(void)
{
    Motoveicolo veicoli[MAX];
    Proprietario persone[MAX];

    PRA PRA_Bari;

    int voceMenuSelezionata;
    int uscita = 0;
    int nVeicoli = 0;
    int nProprietari = 0;

    do
    {
        system("cls");
        voceMenuSelezionata = menu();
        switch (voceMenuSelezionata)
        {
            case 1:
                inserisciVocePRA(&PRA_Bari, veicoli, persone, &nVeicoli, &nProprietari);
                break;
            case 2:
                visualizzaPRA(&PRA_Bari, veicoli, persone);
                system("pause");
                break;
            case 0:
                uscita = 1;
                break;
            default:
                printf("Selezione non valida. Riprova.\n");
        }
    } while (uscita == 0);

}

 /*funzioni*/

int menu()
{
    int voceSelezionata;
    puts("0) exit");
    puts("1) Inserisci voce PRA");
    puts("2) Visualizza PRA");
    scanf("%d", &voceSelezionata);
    while (getchar() != '\n');  // Pulisce il buffer dell'input
    return voceSelezionata;
}

void inserisciPRA(PRA *pra, Motoveicolo motoVeicoli[MAX], Proprietario proprietari[MAX], int *n_motoVeicoli, int *n_proprietari)
{
    // dati proprietario
    printf("Inserisci nome proprietario: ");
    gets(proprietari[(*n_proprietari)].nome);

    printf("Inserisci cognome proprietario: ");
    gets(proprietari[(*n_proprietari)].cognome);

    printf("Inserisci CF proprietario: ");
    gets(proprietari[(*n_proprietari)].cfu);

    (*n_proprietari)++;

    // dati veicolo
    printf("Inserisci targa: ");
    gets(motoVeicoli[*(n_motoVeicoli)].targa);

    printf("Inserisci marca veicolo: ");
    gets(motoVeicoli[*(n_motoVeicoli)].marca);

    printf("Inserisci modello veicolo: ");
    gets(motoVeicoli[*(n_motoVeicoli)].modello);

    printf("Inserisci cilindrata veicolo: ");
    scanf("%d", &(motoVeicoli[*(n_motoVeicoli)].cilindrata));
    while (getchar() != '\n'); // Pulisce il buffer di input

    printf("Inserisci potenza veicolo: ");
    scanf("%f", &(motoVeicoli[*(n_motoVeicoli)].potenza));
    while (getchar() != '\n'); // Pulisce il buffer di input
    (*n_motoVeicoli)++;

    pra->elementi[pra->n_elementi].motoveicolo = &motoVeicoli[*(n_motoVeicoli)-1];
    pra->elementi[pra->n_elementi].proprietario = &proprietari[*(n_proprietari)-1];

    pra->n_elementi++;

    printf("Voce inserita correttamente....\n");
    system("pause");
}

void visualizzaPRA(PRA *pra, Motoveicolo motoVeicoli[MAX], Proprietario proprietari[MAX])
{
    for (int i = 0; i < pra->n_elementi; i++)
    {
        printf("Voce PRA %d:\n", i + 1);
        printf("--Proprietario--\n");

        printf("Nome: %s\n", pra->elementi[i].proprietario->nome);
        printf("Cognome: %s\n", pra->elementi[i].proprietario->cognome);
        printf("CF: %s\n", pra->elementi[i].proprietario->cfu);

        printf("Motoveicolo: %s %s, \nTarga: %s, \nCilindrata: %d, \nPotenza: %f, \nCategoria: %s\n",
               pra->elementi[i].motoveicolo->marca,
               pra->elementi[i].motoveicolo->modello,
               pra->elementi[i].motoveicolo->targa,
               pra->elementi[i].motoveicolo->cilindrata,
               pra->elementi[i].motoveicolo->potenza,
               pra->elementi[i].motoveicolo->categoria);
        printf("\n");
    }
}
