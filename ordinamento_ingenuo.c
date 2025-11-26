/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define MAX_VALUE 30

/*function main begins program execution*/
int main(void)
{

    int n;
    int mioVettore[MAX];
    srand(time(0)); /*funzione per mettere il seed del numero casuale*/

    printf("\n---VETTORE---\n");

    /*generiamo i valori del mioVettore*/
     for (int i = 0; i < MAX; i++)
     {
        n = (rand() % (MAX_VALUE-1+1));    /*genera un numero casuale tra 1 e 10*/
        mioVettore[i]=n;
        printf("%d) %d * ", i, mioVettore[i]);
    }

    /*ordinamento dei valori del mioVettore*/
    for (int i = 0; i < MAX-1; i++)
    {
        for (int j = i; j < MAX; j++)
        {
            if (mioVettore[i]>mioVettore[j])
            {
                n=mioVettore[i];
                mioVettore[i]=mioVettore[j];
                mioVettore[j]=n;
            }
        }
    }

    printf("\n---VETTORE ORDINATO---\n");

    for (int i = 0; i < MAX; i++)
    {
        printf("\n%d) %d * ", i, mioVettore[i]);
    }



    return 0;/*indicate that program ended successfully*/
}
