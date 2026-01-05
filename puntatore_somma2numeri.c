/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>

int sommaNumeri(int *num1Ptr, int *num2Ptr, int *sumPtr); // la funzione che somma due numeri

int main()
{
    int number1, number2, sum;

    printf("Inserisci il primo numero: ");
    scanf("%d", &number1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &number2);

    sommaNumeri(&number1, &number2, &sum); // chiamata alla funzione con i puntatori

    printf("La somma di %d e %d è %d\n", number1, number2, sum);

    return 0;
}

int sommaNumeri(int *num1Ptr, int *num2Ptr, int *sumPtr)
{
    *sumPtr = *num1Ptr + *num2Ptr; // somma i valori puntati e memorizza il risultato
}
