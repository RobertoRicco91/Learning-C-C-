/*esercizio_10v.c
Scrivi un programma che riceve 10 numeri positivi. genera a
caso una posizione nel vettore. Il vettore viene modificato in due sottoinsiemi:
nella partizione di sinistra inserisce tutti i valori inferiori o uguali al
numero presente nella posizione selezionata e nella partizione di destra tutti
i valori maggiori del valore selezionato.*/

/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10


/*dichiarazioni funzioni*/
int riempiVettore(int [], int, int);
void visualizzaVettore(int []);
int generaPosizione(int [], int, int);
void modificaVettore(int [], int, int);


/*function main begins program execution*/
int main(void)
{
    int v[MAX];
    int posizione;

    riempiVettore(v, MAX, 100);
    printf("\nVettore prima della modifica: \n");
    visualizzaVettore(v);

    /*genero la posizione*/
    posizione = generaPosizione(v, 4, 7); /*random da 0 a 9*/
    printf("\nPosizione random generata: %d - vettore[%d]=%d\n", posizione, posizione, v[posizione]);

    modificaVettore(v, posizione, MAX);
    printf("\nVettore dopo la modifica: \n");
    visualizzaVettore(v);

    return 0;/*indicate that program ended successfully*/
}

/*definizioni funzioni*/
int riempiVettore(int v[], int n, int max)
{
    int i;

    /*semino il generatore di numeri casuali*/
    srand(time(0));

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
int generaPosizione(int v[], int minimo, int massimo)
{
    int posizione;
    posizione = (rand() % (massimo - minimo + 1)) + minimo;
    return posizione;
}
void modificaVettore(int v[], int posizione, int m)
{
    int dump[MAX];
    int i;
    int up = MAX - 1;
    int down = 0;
    /*copio il vettore originale nel vettore temporaneo*/
    for(i=0;i<m;i++)
    {
        dump[i] = v[i];
    }
    /*ordino il vettore in base alla posizione generata da generaPosizione*/
    for (int i=0;i<MAX;i++)
	{
		if ((v[i]<=v[posizione]) && (i!=posizione))
		{
			dump[down]=v[i];
			down++;
		}
		else if ((v[i]>v[posizione]) && (i!=posizione))
		{
			dump[up]=v[i];
			up--;
		}
	}
    dump[up]=v[posizione];
    /*copio il vettore temporaneo nel vettore originale*/
    for(i=0;i<MAX;i++)
    {
        v[i] = dump[i];
    }
}

