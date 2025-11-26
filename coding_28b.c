/*Program in C*/
#include <stdio.h>

/*function main begins program execution*/
int main()
{

    int sequenza = 0;
    int nPrec, nSucc;

    while (sequenza != 1)
    {
            printf("Inserisci un numero intero: \n");   /*prompt*/
            scanf(" %d", &nPrec); /*read a number*/
        if (nPrec < 0)
        {
            printf("Il numero inserito non é valido. \n");
            sequenza = 1;
        }
        else
        {
            printf("Inserisci un altro numero e ti dico se sono una SEQUENZA o se NON E' UNA SEQUENZA o se è IRREGOLARE: \n");   /*prompt*/
            scanf(" %d", &nSucc); /*read a number*/

            if (nPrec < nSucc)
            {
                printf("E' una sequenza crescente. \n");
            }
            else if (nPrec > nSucc)
            {
                printf("E' una sequenza decrescente. \n");
            }
            else
            {
                printf("E' una sequenza irregolare. \n");
            }
        }
    }

    return 0;/*indicate that program ended successfully*/
}


// scirvi programma per sequenza anche per irregolare
