/*char_scansioneAlfabeto.c
Scansioniamo tutte le lettere dell’alfabeto
tramite la tabella ascii dando l’informazione
se si tratta di maiuscola, minuscola o altro.

Stile di programmazione: Camel Case + Almann
*/

/*Program in C*/
#include <stdio.h>


/*function main begins program execution*/
int main(void)
{

    char ch;
    for (ch = 65; ch <= 122; ch++) /*scansiona tutti i caratteri ascii*/
    {
        if (ch >= 'A' && ch <= 'Z') /*maiuscola*/
        {
            printf("%c e' una lettera maiuscola\n", ch);
        }
        else if (ch >= 'a' && ch <= 'z') /*minuscola*/
        {
            printf("%c e' una lettera minuscola\n", ch);
        }
        else /*altro*/
        {
            printf("%c non e' una lettera\n", ch);
        }
    }



    return 0;/*indicate that program ended successfully*/
}


