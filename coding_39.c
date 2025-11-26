/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*function main begins program execution*/
int main()
{
    int day;

    printf("Inserisci un numero tra 1 e 7\n");
    scanf(" %d", &day);

    switch (day)
    {
    case 1:
        printf("1 è il lunedì\n");
        break;

    case 2:
        printf("2 è il martedì\n");
        break;

    case 3:
        printf("3 è il mercoledì\n");
        break;

    case 4:
        printf("4 è il giovedì\n");
        break;

    case 5:
        printf("5 è il venerdì\n");
        break;

    case 6:
        printf("6 è il sabato\n");
        break;

    case 7:
        printf("7 è la domenica\n");
        break;

    default:
        printf("Numero non valido\n");
        break;
    }

    return 0;/*indicate that program ended successfully*/
}
