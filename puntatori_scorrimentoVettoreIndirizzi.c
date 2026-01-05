/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>

int main()
{
    int vettore[5]={9, 5, 6, 7, 10}; // definizione di un array di interi

    int *vettorePtr = &vettore[0]; // puntatore che punta al primo elemento dell'array

    for(int i=0; i<5; i++)
    {
        switch(i)
        {
            case 0:
                printf("Primo elemento: %d\n", &vettorePtr); // stampa il primo elemento
                break;
            case 1:
                vettorePtr++; // sposta il puntatore al secondo elemento
                printf("Secondo elemento: %d\n", &vettorePtr);
                break;
            case 2:
                vettorePtr--; // sposta il puntatore primo elemento
                printf("Terzo elemento: %d\n", &vettorePtr);
                break;
            case 3:
                vettorePtr++;
                vettorePtr++; // sposta il puntatore al quarto elemento
                printf("Quarto elemento: %d\n", &vettorePtr);
                break;
            case 4:
                vettorePtr--;
                vettorePtr--; // sposta il puntatore al quinto elemento
                printf("Quinto elemento: %d\n", &vettorePtr);
                break;
        }
    }

    return 0;
}
