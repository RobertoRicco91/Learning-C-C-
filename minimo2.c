/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*funzioni*/
int minimo(int num1, int num2);


/*function main begins program execution*/
int main(void)
{

    int num1,num2,risultato;
    printf("Inserisci primo numero intero : \n");
    scanf("%d", &num1);
    printf("Inserisci secondo numero intero : \n");
    scanf("%d", &num2);
    risultato = minimo(num1, num2);

    return 0;/*indicate that program ended successfully*/
}

/*funzione potenze*/
int minimo(int num1, int num2)
{
    int min;
    if (num1 < num2)
    {
        min = num1;
    }
    else if(num2 < num1)
    {
        min = num2;
    }
    else
    {
        min = num1; //o num2, sono uguali
    }
    printf("Il minimo tra %d e %d è: %d\n", num1, num2, min);
    return min;
}
