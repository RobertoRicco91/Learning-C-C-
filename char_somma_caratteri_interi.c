/*char_somma_caratteri_interi.c

Leggere due caratteri e se sono cifre stampare il
valore della somma delle due cifre.

Stile di programmazione: Camel Case + Almann
*/

/*Program in C*/
#include <stdio.h>


/*function main begins program execution*/
int main(void)
{
    char ch, ch2;
    printf("Inserisci un carattere: \n");
    ch = getchar();

    while (getchar() != '\n'); // svuota il buffer stdio

    printf("Inserisci un altro carattere: \n");
    ch2 = getchar();

    if ((ch >= '0' && ch <= '9') && (ch2 >= '0' && ch2 <= '9'))
    {
        int somma;
        somma = (ch - '0') + (ch2 - '0'); // Somma del valore numerico delle due cifre
        printf("\nLa somma delle due cifre %c e %c e': %d\n", ch, ch2, somma);
    }
    else
    {
        printf("\nNon hai inserito due cifre numeriche\n");
    }

    return 0;/*indicate that program ended successfully*/
}


