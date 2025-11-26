/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define MAX_VALUE 20

/*function main begins program execution*/
int main(void)
{

    int numeroSegreto;
    int mioVettore[MAX];
    srand(time(0)); /*funzione per mettere il seed del numero casuale*/
    int somma;
    float media;

    for (int i = 0; i <= MAX; i++)
    {
        numeroSegreto = (rand() % (MAX_VALUE-1));    /*genera un numero casuale tra 1 e 10*/
        mioVettore[i]=numeroSegreto;
        printf("%d - ", mioVettore[i]);
        somma += mioVettore[i];
    }

    media = (float)somma / MAX;
    printf("media:%.2f\n",media);
    printf("\n---ISTOGRAMMA---\n");

    for (int i = 0; i <= MAX; i++)
    {
        for (int j = 0; j <= mioVettore[i]; j++)
        {
            if (j<mioVettore[i])
            {
                printf("*");
            }
            else
            {
                printf(" %d , %2.3f \n", mioVettore[i],media-mioVettore[i]);
            }
        }
    }


    return 0;/*indicate that program ended successfully*/
}
