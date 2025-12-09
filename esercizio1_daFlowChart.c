/*esercizio1_daFlowChart.c
Stile di programmazione: Camel Case + Almann
*/

/*Program in C*/
#include <stdio.h>


/*dichiarazioni funzioni*/
float leggereNumero(char numeroOrdine);


/*function main begins program execution*/
int main(void)
{
    float primoNumero;
    float secondoNumero;
    do
    {
        primoNumero = leggereNumero('1');
        secondoNumero = leggereNumero('2');

        if ((primoNumero<secondoNumero) && ((primoNumero!=0)&&(secondoNumero!=0)))
        {
            printf("Il primo numero e\' minore del secondo. Il rapporto e\' %2.2f :",(primoNumero/secondoNumero));
        }
        else if ((primoNumero>secondoNumero) && ((primoNumero!=0)&&(secondoNumero!=0)))
        {
            printf("Il secondo numero e\' minore del primo. Il rapporto e\' %2.2f :",(secondoNumero/primoNumero));
        }
        else
        {
            printf("Uno dei due numeri e\' 0. Chiudo il programma\n");
        }
    }
    while ((primoNumero!=0) && (secondoNumero!=0));

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

