/*Esercizio str1
Scrivere un programmino che:
• Gestisce carte da gioco: denari, spade, coppe, mazze.
• Il programma istanzia la carta Asso di spade
• La carta istanziata viene stampata a video mediante:
a) Operatore .
b) Operatore ->
c) Operazione che deferenzia il puntatore (*ptr).*/
/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>
#include <string.h>


int main (void)
{
    struct card
    {
        char *valore;
        char *seme;
    };

    struct card myCard = {"Asso", "Spade"};
    printf("La carta è: %s di %s\n", myCard.valore, myCard.seme);

    struct card *ptrCard;
    ptrCard = &myCard;

    printf("La carta è: %s di %s\n", ptrCard->valore, ptrCard->seme);

    printf("La carta è: %s di %s\n", (*ptrCard).valore, (*ptrCard).seme);

    return 0;
}
