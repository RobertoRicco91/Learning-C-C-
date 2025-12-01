/*ordinaVettori_CRE_DECRE.c*/
/*Data una sequenza di 10 numeri interi ordinarli in modo crescente e decrescente su due vettori differenti*/

/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

/*dichiarazioni funzioni*/
void ordinamento(int [], int);


/*function main begins program execution*/
int main(void)
{
    int v[MAX];
    int i;

    printf("Inserisci 10 numeri interi:\n");
    for (i = 0; i < MAX; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf(" %d", &v[i]);
    }

    ordinamento(v, MAX);

    printf("\nVettore ordinato in modo crescente:\n");
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\nVettore ordinato in modo decrescente:\n");
    for (i = MAX - 1; i >= 0; i--)
    {
        printf("%d ", v[i]);
    }
    printf("\n");


    return 0;/*indicate that program ended successfully*/
}

/*definizioni funzioni*/
void ordinamento(int v[MAX], int size)
{
    int i, j, dump;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                // scambia v[j] e v[j+1]
                dump = v[j];
                v[j] = v[j + 1];
                v[j + 1] = dump;
            }
        }
    }
}
