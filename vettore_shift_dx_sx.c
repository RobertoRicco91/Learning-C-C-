/*ordinaVettori_CRE_DECRE.c*/
/*Data una sequenza di 10 numeri interi ordinarli in modo crescente e decrescente su due vettori differenti*/

/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

/*dichiarazioni funzioni*/
// void ordinamento(int [], int);
void shift_dx(int [], int);
void shift_sx(int [], int);



/*function main begins program execution*/
int main(void)
{
    int v[MAX]={0,1,2,3,4,5,6,7,8,9}; /*vettore originale*/
    int shifted_v_to_dx[MAX]={0,1,2,3,4,5,6,7,8,9};
    int shifted_v_to_sx[MAX]={0,1,2,3,4,5,6,7,8,9};
    int i;
    /*chiamata funzioni*/
    shift_dx(shifted_v_to_dx, MAX);
    shift_sx(shifted_v_to_sx, MAX);
    /*stampa */
    printf("Vettore originale : \n");
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\nVettore dopo shift a destra : \n");
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", shifted_v_to_dx[i]);
    }
    printf("\nVettore dopo shift a sinistra : \n");
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", shifted_v_to_sx[i]);
    }

    return 0;/*indicate that program ended successfully*/
}

/*definizioni funzioni*/
void shift_dx(int v[], int n)
{
    int i, last;
    last = v[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        v[i] = v[i - 1];
    }
    v[0] = last;
}

void shift_sx(int v[], int n)
{
    int i, first;
    first = v[0];
    for (int i = 0; i < n - 1; i++)
    {
        v[i] = v[i + 1];
    }
    v[n - 1] = first;
}

