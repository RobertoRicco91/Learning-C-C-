/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*function main begins program execution*/
int main()
{
    int num1,num2, risultato;
    char operazione;

    printf("Inserisci un numero nella calcolatrice\n");
    scanf(" %d", &num1);

    printf("Inserisci l'operatore: 1)+\n2)-\n3)*\n4)/\n");
    scanf(" %c", &operazione);

    printf("Inserisci un numero nella calcolatrice\n");
    scanf(" %d", &num2);

    switch (operazione)
    {
    case 1:
        risultato = num1 + num2;
        printf("La somma dei due numeri é %d\n", risultato);
        break;

    case 2:
        risultato = num1 - num2;
        printf("La sottrazioni dei due numeri é %d\n", risultato);
        break;

    case 3:
        risultato = num1 * num2;
        printf("La somma dei due numeri é %d\n", risultato);
        break;

    case 4:
        risultato = num1 / num2;
        printf("La somma dei due numeri é %d\n", risultato);
        break;

    default:
        printf("Operatore non valido\n");
        break;
    }

    return 0;/*indicate that program ended successfully*/
}
