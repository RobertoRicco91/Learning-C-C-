/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>

int doubleValue(int *numPtr);

int main()
{
    int num = 5;
    int esito;
    printf("Prima del doppio: %d\n", num);
    esito = doubleValue(&num);
    printf("Dopo del doppio: %d\n", num);
    return 0;
}

int doubleValue(int *numPtr)
{
    int esitoPariDispari;

    if (*numPtr%2 == 0)
    {
        esitoPariDispari = 1;
    }
    else
    {
        esitoPariDispari = 0;
    }
    *numPtr *= 2;

    return esitoPariDispari;

}
