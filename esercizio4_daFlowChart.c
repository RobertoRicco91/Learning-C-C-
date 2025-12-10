/*esercizio4_daFlowChart.c
Progettare un algoritmo che effettui la lettura da tastiera di una serie di coppie di valori numerici reali
(sia positivi che negativi che zero). Per ciascuna coppia, l�algoritmo deve calcolare e stampare il valore
della radice quadrata del rapporto tra il valore maggiore e quello minore dei due.
Il programma termina quando vengono inseriti dei valori che non permettono di svolgere il calcolo nel dominio dei numeri reali.
Prima di terminare si richiede di stampare un messaggio che indichi la ragione per cui non � stato possibile svolgere il calcolo.

Stile di programmazione: Camel Case + Almann
*/

/*Program in C*/
#include <stdio.h>
#include <math.h>


/*dichiarazioni funzioni*/
float leggereNumero(char numeroOrdine);

/*function main begins program execution*/
int main(void)
{
    float valore1, valore2;
    int valoriAmmissibili=1;

    do
    {
        valore1=leggereNumero('1');
        valore2=leggereNumero('2');

        if ( ( (valore1>0)&&(valore2>0) )||( (valore1<0) && (valore2<0) )||( (valore1==0) && (valore2<0) )|| ( (valore1<0)&&(valore2==0) ) )
        {
            if (valore1<valore2)
            {
                printf("Radice di %2.2f :%2.2f",valore2/valore1,sqrt((valore2/valore1)));
            }
            else
            {
                printf("Radice di %2.2f :%2.2f",valore1/valore2,sqrt((valore1/valore2)));
            }
            valoriAmmissibili=1;
        }
        else
        {
            if ((valore1==0) || (valore2==0))
            {
                printf("Impossibile perchè il denominatore è 0\n");
            }
            else
            {
                printf("Impossibile perchè la frazione negativa\n");
            }
            valoriAmmissibili=0;
        }
    }
    while(valoriAmmissibili==1);

    return 0;/*indicate that program ended successfully*/
}

/*definizioni funzioni*/
float leggereNumero(char numeroOrdine)
{
    float numeroDaLeggere;

    printf("\n");
    printf("Inserisci il %c\xF8 numero:",numeroOrdine);  //\xF8 � il codice ascii di �
    scanf("%d",&numeroDaLeggere);
    printf("\n");

     return numeroDaLeggere;
}

