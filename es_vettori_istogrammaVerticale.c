/*es_vettori_istogrammaVerticale.c*/
/*scrivere un programma che riceve 10 numeri positivi. alla fine dell'immissione il programma stampera un istogramma verticale che rappresenter i valori immessi dal utente*/

/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define MAX_VALUE 6


/*dichiarazioni funzioni*/

int istogrammaVerticale(int vettore[MAX]);


/*function main begins program execution*/
int main(void)
{
    int vettore[MAX] = {5,3,6,2,4,1,3,2,4,3};
    // int i;

    // printf("Inserisci 10 numeri positivi, valore massimo %d:\n", MAX_VALUE);
    // for (i = 0; i < MAX; i++)
    // {
    //     printf("Numero %d: ", i + 1);
    //     scanf(" %d", &vettore[i]);
    //     if (vettore[i]>MAX_VALUE)
    //     {
    //         printf("Valore non valido, inserire un numero positivo minore o uguale a %d\n", MAX_VALUE);
    //         i--;
    //     }
    // }
    istogrammaVerticale(vettore);


    return 0;/*indicate that program ended successfully*/
}

/*definizioni funzioni*/
int istogrammaVerticale(int vettore[MAX])
{
    int i;
    int j;
    printf("Istogramma verticale:\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d |", vettore[i]);
        for (int j = 0; j < vettore[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
