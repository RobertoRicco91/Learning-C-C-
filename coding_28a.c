/*Program in C*/
#include <stdio.h>
#define MAX_GIRI 20
/*function main begins program execution*/
int main()
{
    int i = 1;
    int prodotto = 1;
    int somma;

    while (i<=MAX_GIRI)
    {
        if (i % 2 != 0)
        {
            prodotto = i * i;
            printf("Il prodotto del quadrato è %d\n", prodotto);
        }
        else
        {
            somma = somma + i;
            printf("La somma parziale é %d\n", somma);
        }
        i++;
    }

    return 0;/*indicate that program ended successfully*/
}
