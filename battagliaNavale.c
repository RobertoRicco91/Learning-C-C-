/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

/*function main begins program execution*/
int main(void)
{

    int tentativo = 5;
    int colpo = 0;
    int n;
    int posizione;
    int nave[MAX];
    char scelta = 's';
    srand(time(0)); /*funzione per mettere il seed del numero casuale*/


    printf("Gioca a Battaglia Navale\n");


    /*ciclo do while per ripetere il gioco*/
    do
    {
        /*il vettore nave si riempie di 0*/
        for (int i = 0; i < MAX; i++)
        {
            nave[i]=0;
        }

        /*partendo da un indice casuale del vettore nave si posiziona la nave in 3 posizioni*/
        n = (rand() % 8);    /*genera un numero casuale tra 0 e 8*/
        nave[n]=1;
        nave[n+1]=1;
        nave[n+2]=1;



        /*do while per ripetere operazione*/
        while (tentativo>0 && colpo<3)
        {
            /*chiedi all'utente di sparare alla nave*/
            printf("\nSpara alla Nave. Da 0 a 9\n");
            scanf(" %d", &posizione);

            /*if per lo sparo in acqua*/
            if (posizione < 0 || posizione > 9)
            {
                printf("Inserisci un numero corretto");
            }

            /*if per lo sparo in acqua*/
            switch (nave[posizione])
            {
            case 0:
                printf("Hai sparato in acqua!\n");
                nave[posizione]=3;
                tentativo = tentativo - 1;
                break;

            case 1:
                printf("Hai colpito la nave!\n");
                nave[posizione]=2;
                colpo = colpo + 1;
                break;

            case 2:
                printf("Hai già sparato in questa posizione!\n");
                tentativo = tentativo - 1;
                break;

            case 3:
                printf("Hai già sparato in questa posizione!\n");
                tentativo = tentativo - 1;
                break;

            default:
                printf("Inserisci un numero corretto");
                break;
            }

            printf("NAVE\n");

            for (int i = 0; i < MAX; i++)
            {
                if (nave[i] == 2)
                {
                    printf("*");
                }else
                {
                    printf("0");
                }
            }
        };

        /*if per messaggio di vittoria*/
        if (colpo==3)
        {
            printf("\nHai Vinto");
        /*else per messaggio di sconfitta**/
        }else if(tentativo==0 && colpo!=3)
        {
            printf("\nHai Perso");
        }

        tentativo = 5;
        colpo = 0;


        /*messaggio per fare un altra partita*/
        printf("\nVuoi fare un'altra partita? s/n \n");
        scanf(" %c", &scelta);

    } while (scelta == 's' || scelta == 'S');



    return 0;/*indicate that program ended successfully*/
}
