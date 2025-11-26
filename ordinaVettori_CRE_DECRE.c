/*ordinaVettori_CRE_DECRE.c*/
/*Data una sequenza di 10 numeri interi ordinarli in modo crescente e decrescente su due vettori differenti*/

/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

/*dichiarazioni funzioni*/
int cre(int vettoreCre[MAX]);
int decre(int vettoreDecre[MAX]);



/*function main begins program execution*/
int main(void)
{
    int vettoreCre[MAX], vettoreDecre[MAX];
    int i;

    printf("Inserisci 10 numeri interi:\n");
    for (i = 0; i < MAX; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf(" %d", &vettoreCre[i]);
        vettoreDecre[i] = vettoreCre[i];
    }

    cre(vettoreCre);
    decre(vettoreDecre);

    printf("\nVettore crescente: ");
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", vettoreCre[i]);
    }
    printf("\nVettore decrescente: ");
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", vettoreDecre[i]);
    }
    printf("\n");


    return 0;/*indicate that program ended successfully*/
}

/*definizioni funzioni*/
int cre(int vettoreCre[MAX])
{
    int i, j, dump;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (vettoreCre[i] > vettoreCre[j])
            {
                dump = vettoreCre[i];
                vettoreCre[i] = vettoreCre[j];
                vettoreCre[j] = dump;
            }
        }
    }
    return 0;
}
int decre(int vettoreDecre[MAX])
{
    int i, j, dump;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (vettoreDecre[i] < vettoreDecre[j])
            {
                dump = vettoreDecre[i];
                vettoreDecre[i] = vettoreDecre[j];
                vettoreDecre[j] = dump;
            }
        }
    }
    return 0;
}
