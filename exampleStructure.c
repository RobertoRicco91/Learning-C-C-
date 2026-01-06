/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>

struct card
{
    char *face;
    char *suit;
} aCard, deck[52], *cardPtr;


void main(void)
{
    struct card aCard = {"Ace", "Hearts"};
    printf("Card: %s of %s\n", aCard.face, aCard.suit);
}
