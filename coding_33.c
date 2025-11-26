/*Program in C*/
#include <stdio.h>

/*function main begins program execution*/
int main()
{

    int n;  /*variabile che inserisce l'utente*/
    int giri; /*variabile per il numero di giri*/
    float media; /*variabile per la media*/

    do
    {
        printf("Inserisci voti per calcolare la media o premi 0 per uscire. \n Inserisci il prossimo voto: \n");   /*prompt*/
        scanf(" %d", &n); /*read a number*/
        if (n>0) /*controllo della variabile se maggiore di 0*/
        {
            media = media + n; /*variabile per la media che si somma ad ogni giro*/
            printf("Inserisci voti per calcolare la media o premi 0 per uscire. \n Inserisci il prossimo voto: \n");   /*prompt*/
            scanf(" %d", &n); /*read a number*/
            giri ++; /*incremento  della variabile dei giri*/
        }
    }
    while (n != 0); /*il ciclo termina quando l'utente inserisce 0*/

    if (media==0) /* controllo della variabile*/
    {
        printf("Inserisci un numero intero positivo! \n"); /*print message*/
    }
    else
    {
        media = media / giri; /*calcolo definitivo della media*/
        printf("La media dei voti é: %.2f\n", media); /*print media*/
    }

    return 0;/*indicate that program ended successfully*/
}
