/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*funzioni*/
int potenze(int base, int esp);


/*function main begins program execution*/
int main(void)
{

    int a = 5,b = 4;
    int risultato;
    risultato = potenze(a, b);
    printf("Risultato = %d", risultato);

    return 0;/*indicate that program ended successfully*/
}

/*funzione potenze*/
int potenze(int base, int esp)
    {
        int risultato;
        if (esp != 0)
        {
            risultato = pow(base, esp);
        }
        else
        {
            risultato = 1;
        }
        printf("Il risultato di %d elevato alla %d è %d\n", base, esp, risultato);
        return risultato;
    }
