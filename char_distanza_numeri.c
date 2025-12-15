/*char_distanza_numeri.c

Conoscere il valore
decimale di un carattere
numerico ('0'-'9'), è
sufficiente calcolare la
“distanza” dalla cifra '0'

Stile di programmazione: Camel Case + Almann
*/

/*Program in C*/
#include <stdio.h>


/*function main begins program execution*/
int main(void)
{

    char ch='7';
    int val;
    if (ch>='0' && ch<='9')
    {
        printf("%c cifra numerica\n",ch);
        val=ch-'0'; /*calcolo della distanza dalla cifra '0'*/
        printf("Distanza dalla cifra '0': %d\n",val);
    }
    else
    {
        printf("%c non e' una cifra numerica\n",ch);
    }

    return 0;/*indicate that program ended successfully*/
}


