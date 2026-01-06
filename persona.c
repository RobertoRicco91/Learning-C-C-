/*Definire una struct "Persona" che
contenga i seguenti campi: nome,
cognome, età. Scrivi un programma
che crei una variabile di tipo
"Persona" e assegni valori ai suoi
campi. Successivamente, stampa i
valori dei campi della struttura.
Aggiungere: cercare una persona per
cognome*/
/*Stile di programmazione: Camel Case + Almann*/

#include <stdio.h>
#include <string.h>
struct Persona
{
    char nome[30];
    char cognome[30];
    int eta;
};

int main(void)
{
    struct Persona miaPersona;
    struct Persona cercaPersona;

    // Assegnazione dei valori ai campi della struttura
    strcpy(miaPersona.nome, "Mario");
    strcpy(miaPersona.cognome, "Rossi");
    miaPersona.eta = 25;

    printf("Inserisci il cognome della persona da cercare: ");
    scanf("%s", cercaPersona.cognome);
    // Confronto dei cognomi
    if (strcmp(miaPersona.cognome, cercaPersona.cognome) == 0)
    {
        printf("Persona trovata: %s %s, Età: %d\n",
               miaPersona.nome, miaPersona.cognome, miaPersona.eta);
    }
    else
    {
        printf("Persona con cognome %s non trovata.\n", cercaPersona.cognome);
    }


    return 0;
}
