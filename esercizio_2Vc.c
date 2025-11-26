/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define MAX_VALUE 30

/*function main begins program execution*/
int main(void)
{

    // int n;
    // int mioVettore[MAX];
    // srand(time(0)); /*funzione per mettere il seed del numero casuale*/
    int mioVettore[MAX]={4, 6, 7, 10, 20, 4, 1, 30, 1, 30};
    int vMin[MAX];
    int vMax[MAX];
    int massimo = mioVettore[0];
    int minimo = mioVettore[0];
    int imin=0, imax=0;

    /*generiamo i valori del mioVettore*/
    // for (int i = 0; i <= MAX; i++)
    // {
    //     n = (rand() % (MAX_VALUE-1));    /*genera un numero casuale tra 1 e 10*/
    //     mioVettore[i]=n;
    // }

    /*troviamo il massimo e il minimo*/
    for (int i = 0; i < MAX; i++)
    {
        if (mioVettore[i] < minimo)
        {
            minimo = mioVettore[i];
        }
        if (mioVettore[i] > massimo)
        {
            massimo = mioVettore[i];
        }
    }

    /*troviamo le posizioni dei massimo e minimo*/
    for (int i = 0; i < MAX; i++)
    {
        if (mioVettore[i]== minimo )
        {
            vMin[imin] = i;
            imin = imin + 1;
        }
        if (mioVettore[i]== massimo )
        {
            vMax[imax] = i;
            imax = imax + 1;
        }
    }

    /*stampiamo*/
    printf("Minimo: %d\n", minimo);
    printf("\nPosizioni minimo:\n");

    for (int i = 0; i < imin; i++)
    {
        printf("\n%d - ", vMin[i]);
    }

    printf("\nMassimo: %d\n", massimo);
    printf("\nPosizioni massimo:\n");
    for (int i = 0; i < imax; i++)
    {
        printf("\n%d - ", vMax[i]);
    }


    return 0;/*indicate that program ended successfully*/
}
