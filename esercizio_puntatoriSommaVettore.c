/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>

void sumintegers(int *arrayPtr, int size, int *sumPtr); // funzione che somma gli interi

int main()
{
    int vettore[5] = {9, 5, 6, 7, 10}; // definizione di un array di interi
    int somma = 0; // variabile per memorizzare la somma

    sumintegers(vettore, 5, &somma); // chiamata alla funzione per sommare gli interi

    printf("La somma degli elementi del vettore e': %d\n", somma); // stampa la somma

    return 0;
}

void sumintegers(int *arrayPtr, int size, int *sumPtr)
{
    *sumPtr = 0; // inizializza la somma a zero
    for(int i = 0; i < size; i++)
    {
        *sumPtr += *(arrayPtr + i); // somma gli elementi dell'array
    }
}
