/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_TENTATIVI 5


/*function main begins program execution*/
int main()
{
    char start;
    int numeroSegreto;
    int numeroUtente1, numeroUtente2;
    int indovinato=0;
    int tentativi=0;

    srand(time(0)); /*funzione per mettere il seed del numero casuale*/
    numeroSegreto = rand() % 10 +1 ;    /*genera un numero casuale tra 1 e 10*/

    printf("a)Un player: 1 \n");   /*prompt*/
    printf("b)Due players: 2 \n");   /*prompt*/
    printf("c)Esci: 3 \n");   /*prompt*/

    scanf(" %d", &start); /*read a number*/

    printf("Hai selezionato l'opzione %d",(start=='a')*1+(start=='b')*2+(start=='c')*3); /*variabile per opzione start*/


    if (start==1) /*Game per un player*/
    {
        while ((indovinato==0) && (tentativi<MAX_TENTATIVI))
        {
            printf("Inserisci un numero tra 1 e 10: \n");   /*prompt*/
            scanf("%d", &numeroUtente1); /*read a number*/

            if (numeroUtente1==numeroSegreto)
            {
                indovinato=1;
                tentativi=tentativi+1;
                printf("Hai vinto al %d tentativo! \n", tentativi); /*print message*/
            }
            else if(numeroUtente1>numeroSegreto)
            {
                printf("Mi dispiace, il numero segreto é piú piccolo. \n"); /*print message*/
                tentativi=tentativi+1;
            }
            else
            {
                printf("Mi dispiace, il numero segreto é piú grande. \n"); /*print message*/
                tentativi=tentativi+1;
            }
        }

        if (indovinato==0)
        {
            printf("Mi dispiace, hai perso. IL numero segreto è: %d\n", numeroSegreto);
        }
        else
        {
            printf("Hai vinto! Il numero segreto è %d \n", numeroSegreto);
        }
    }
    else if (start==2) /*Game per due giocatori*/
    {
        while ((indovinato==0) && (tentativi<MAX_TENTATIVI))
        {
            printf("PLAYER_1: Inserisci un numero tra 1 e 10: \n");   /*prompt*/
            scanf("%d", &numeroUtente1); /*read a number*/

            printf("PLAYER_2: Inserisci un numero tra 1 e 10: \n");   /*prompt*/
            scanf("%d", &numeroUtente2); /*read a number*/

            if (numeroUtente1==numeroSegreto || numeroUtente2==numeroSegreto) /*Player 1*/
            {
                if (numeroUtente1==numeroSegreto)
                {
                    indovinato=1;
                    tentativi=tentativi+1;
                    printf("PLAYER 1 HA VINTO al %d tentativo! \n", tentativi); /*print message*/
                }
                else
                {
                    indovinato=1;
                    tentativi=tentativi+1;
                    printf("PLAYER 2 HA VINTO al %d tentativo! \n", tentativi); /*print message*/
                }
            }
            else if(numeroUtente1>numeroSegreto || numeroUtente2>numeroSegreto)
            {
                if (numeroUtente1>numeroSegreto && numeroUtente2>numeroSegreto)
                {
                    printf("PLAYER_1 e PLAYER_2 mi dispiace, il numero segreto é piú piccolo. \n"); /*print message*/
                    tentativi=tentativi+1;
                }
                else if (numeroUtente1>numeroSegreto)
                {
                    printf("PLAYER_1 mi dispiace, il numero segreto é piú piccolo. \n"); /*print message*/
                    tentativi=tentativi+1;
                }
                else
                {
                    printf("PLAYER_2 mi dispiace, il numero segreto é piú piccolo. \n"); /*print message*/
                    tentativi=tentativi+1;
                }
            }
            else
            {
                if (numeroUtente1<numeroSegreto || numeroUtente2<numeroSegreto)
                {
                    if (numeroUtente1<numeroSegreto && numeroUtente2<numeroSegreto)
                {
                    printf("PLAYER_1 e PLAYER_2 mi dispiace, il numero segreto é piú grande. \n"); /*print message*/
                    tentativi=tentativi+1;
                }
                else if (numeroUtente1<numeroSegreto)
                {
                    printf("PLAYER_1 mi dispiace, il numero segreto é piú grande. \n"); /*print message*/
                    tentativi=tentativi+1;
                }
                else
                {
                    printf("PLAYER_2 mi dispiace, il numero segreto é piú grande. \n"); /*print message*/
                    tentativi=tentativi+1;
                }
                }
            }
        }
        if (indovinato==0)
        {
            printf("PLayer_1 Mi dispiace, hai perso. Il numero segreto è: %d\n", numeroSegreto);
        }
        else
        {
            printf("PLayer_1 Hai vinto! Il numero segreto è %d \n", numeroSegreto);
        }
    }
    else    /*Esci dal game*/
    {
        return 0;
    }

    return 0;/*indicate that program ended successfully*/
}
