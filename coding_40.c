/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

/*function main begins program execution*/
int main(void)
{
    int numeroSegreto;
    int mioVettore[MAX];
    srand(time(0)); /*funzione per mettere il seed del numero casuale*/
    int i;

    for (int i = 0; i <= MAX; i++)
    {
        numeroSegreto = rand() % 100 +1 ;    /*genera un numero casuale tra 1 e 10*/
        mioVettore[i]=numeroSegreto;

        if (i<MAX)
        {
            printf("%d - ", mioVettore[i]);
        }
        else
        {
            printf("%d\n", mioVettore[i]);
        }
    }

    return 0;/*indicate that program ended successfully*/
}
