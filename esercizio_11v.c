/*esercizio_11v.c
Scrivere un programmino in C che una volta caricato in modo
random un vettore di 10 numeri interi chiede all’utente un
numero intero a tre cifre. Gli indici corrispondenti alle cifre del
numero intero dato in input dall’utente vengono azzerati. Il
programma da in output il vettore modificato.*/

/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define CIFRE 3



/*dichiarazioni funzioni*/
int riempiVettore(int [], int, int);
void visualizzaVettore(int []);
void modificaVettore(int [], int[], int);


/*function main begins program execution*/
int main(void)
{
    int v[MAX];
    int posizione[CIFRE];

    riempiVettore(v, MAX, 100);
    printf("\nVettore prima della modifica: \n");
    visualizzaVettore(v);

    /*chiedi posizioni ad utente*/
    printf("\nInserisci un numero intero a 3 cifre: ");
    scanf("%1d%1d%1d", &posizione[0], &posizione[1], &posizione[2]);

    modificaVettore(v, posizione, MAX);
    printf("\nVettore dopo la modifica: \n");
    visualizzaVettore(v);

    return 0;/*indicate that program ended successfully*/
}

/*definizioni funzioni*/
int riempiVettore(int v[], int n, int max)
{
    int i;
    /*semino generatore di numeri casuali*/
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        v[i]=rand()%max;
    }
}
void visualizzaVettore(int v[])
{
    int i;

    for(i=0;i<MAX;i++)
    {
        printf("vettore[%d]=%d\n", i, v[i]);
    }
}

void modificaVettore(int v[], int posizione[], int m)
{
    int i;
    for(i=0;i<CIFRE;i++)
    {
        if(posizione[i]>=0 && posizione[i]<m)
        {
            v[posizione[i]]=0;
        }
        else
        {
            printf("\nAttenzione! La posizione %d non e' valida!\n", posizione[i]);
        }
    }
}

