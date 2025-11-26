/*Program in C*/
#include <stdio.h>
#include <stdlib.h>

/*function main begins program execution*/
int main()
{
    int pasta = 9;
    int pizza = 6;
    int insalata = 3;
    int persone;
    int totale;
    char menu;

    do
    {
        printf("Seleziona il menù che desideri \n");
        printf("1)Pasta \n");
        printf("2)Pizza \n");
        printf("3)Insalata \n");
        printf("4)Esci \n");
        scanf(" %c", &menu); /*read a number*/

        printf("Hai selezionato l'opzione %c.\n", (menu=='1')*1+(menu=='2')*2+(menu=='3')*3+(menu=='4')*4); /*variabile per opzione scelta*/

        switch (menu)
        {
        case 1:
            printf("Quante persone desiderano la pasta? \n");
            printf("Inserisci il numero di persone: \n");
            scanf(" %d", &persone); /*read a number*/
            printf("IL prezzo totale al momento è %d", (pasta*persone)); /*variabile per calcolare il totale*/
            totale = (pasta*persone);
            break;

        case 2:
            printf("Quante persone desiderano la pizza? \n");
            printf("Inserisci il numero di persone: \n");
            scanf(" %d", &persone); /*read a number*/
            printf("IL prezzo totale al momento è %d", (pizza*persone)); /*variabile per calcolare il totale*/
            totale = (pizza*persone);
            break;

        case 3:
            printf("Quante persone desiderano l' insalata? \n");
            printf("Inserisci il numero di persone: \n");
            scanf(" %d", &persone); /*read a number*/
            printf("IL prezzo totale al momento è %d", (insalata*persone)); /*variabile per calcolare il totale*/
            totale = (insalata*persone);
            break;

        case 4:
            printf("Arrivederci \n");
            break;

        default:
            printf("Scelta non valida");
            break;
        }
    }
    while (menu!=4);

    return 0;/*indicate that program ended successfully*/
}
