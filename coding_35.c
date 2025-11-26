/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #define MAX_GIRI 5

/*function main begins program execution*/
int main()
{

    char start;
    int num1player1, num2player1,num1player2, num2player2, tentativi;
    int sommaPreviewPlayer1, sommaPostPlayer1, sommaPreviewPlayer2, sommaPostPlayer2;

    printf("a)Play 2 player \n");
    printf("b)Exit \n");
    scanf(" %c", &start);

    printf("Hai selezionato l'opzione %d.\n", (start=='a')*1+(start=='b')*2);

    if (start=='a')
    {
        do
        {
            for (size_t i = 1; i <= 5; i++)
            {
                printf("----TURNO %i----\n", i);

                srand(time(0)); /*funzione per mettere il seed del numero casuale*/

                num1player1 = rand() % 6 + 1;    /*genera un numero casuale tra 1 e 6*/
                num2player1 = rand() % 6 + 1;    /*genera un numero casuale tra 1 e 6*/
                sommaPreviewPlayer1 = num1player1+num2player1;    /*genera un numero casuale tra 1 e 10*/
                printf("Player 1 il tuo punteggio è %d + %d ===> somma è %d \n", num1player1, num2player1, sommaPreviewPlayer1);

                srand(time(0)); /*funzione per mettere il seed del numero casuale*/

                num1player2 = rand() % 6 + 1;    /*genera un numero casuale tra 1 e 6*/
                num2player2 = rand() % 6 + 1;    /*genera un numero casuale tra 1 e 6*/
                sommaPreviewPlayer2 = num1player2+num2player2;
                printf("Player 2 il tuo punteggio è %d + %d ===> somma è %d \n", num1player2, num2player2, sommaPreviewPlayer2);

                sommaPostPlayer1=+sommaPreviewPlayer1;
                sommaPostPlayer2=+sommaPreviewPlayer2;
            }

            printf("\n----IL RIDULTATO FINALE----\nPUNTEGGIO PLAYER 1 %d \nPUNTEGGIO PLAYER 2 %d \n", sommaPostPlayer1, sommaPostPlayer2);
        }
        while ((sommaPostPlayer1>sommaPostPlayer2) || (sommaPostPlayer1>sommaPostPlayer2));

        if (sommaPostPlayer1>sommaPostPlayer2)
        {
            printf("\nPlayer 1 you WIN!");
        }
        else
        {
            printf("\nPlayer 2 you WIN!");
        }
    }
    else
    {
        printf("Arrivederci!\n");
    }

    return 0;/*indicate that program ended successfully*/
}
