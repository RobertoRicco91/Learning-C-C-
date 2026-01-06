/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>
#include <string.h>

struct ATTORE
{
    char nome[30];
    char cognome[30];
    int eta;
    char ruolo[20];
};

void main()
{
    struct ATTORE miaPersona;
    strcpy(miaPersona.nome, "Tom");
    strcpy(miaPersona.cognome, "Holland");
    miaPersona.eta = 32;
    strcpy(miaPersona.ruolo, "Spiderman");
    printf("%s", miaPersona.nome);
    printf(" %s\n", miaPersona.cognome);
    printf("Eta\': %d\n", miaPersona.eta);
    printf("Ruolo: %s\n", miaPersona.ruolo);
}


