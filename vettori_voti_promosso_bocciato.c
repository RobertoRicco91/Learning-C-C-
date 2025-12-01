/*ordinaVettori_CRE_DECRE.c*/
/*Data una sequenza di 10 numeri interi ordinarli in modo crescente e decrescente su due vettori differenti*/

/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*dichiarazioni funzioni*/
float calcolatoreMedia(int [], int);



/*function main begins program execution*/
int main(void)
{
    int n;
    printf("\nInserisci quanti sono i voti da salvare salvare:\n");
    scanf("%d", &n);
    int v[n]; /*vettore originale*/

    float media;
    int i;


    /*stampa*/
    printf("\nInserisci i voti:\n");
    for(i=0;i<n;i++)
    {
        printf("Numero %d: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("\n");


    /*chiamata funzioni*/
    media = calcolatoreMedia(v, n);

    printf("La media dei voti e': %.2f\n", media);

    return 0;/*indicate that program ended successfully*/
}

/*definizioni funzioni*/
float calcolatoreMedia(int v[], int n)
{
    int i;
    float somma;

    for(i=0;i<n;i++)
    {
        somma+=v[i];
    }

    return (somma/n);
}

