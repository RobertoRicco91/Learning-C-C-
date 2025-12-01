/*scrivere una funzione che riceva in ingresso le coordinate x e y su un piano cartesiano e restituisca la loro distanza*/
/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*prototipo funzioni*/
int distanza(int x1, int y1, int x2, int y2);


/*function main begins program execution*/
int main(void)
{

    int x1, y1, x2 , y2;
    int risultato;
    printf("Inserisci due numeri per conoscere la loro distanza. \nInserisci primo numero : \n");
    scanf(" %d", &x1);
    printf("Inserisci secondo numero : \n");
    scanf(" %d", &y1);
    printf("Inserisci due numeri per conoscere inizio e fine del piano cartesiano. \nInserisci inizio piano cartesiano : \n");
    scanf(" %d", &x2);
    printf("Inserisci fine piano cartesiano : \n");
    scanf(" %d", &y2);
    risultato = distanza(x1, y1, x2, y2);

    return 0;/*indicate that program ended successfully*/
}

/*dichiarazionefunzione*/
int distanza(int x1, int y1, int x2, int y2)
    {
        int dist;
        dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        printf("La distanza tra i punti (%d, %d) e (%d, %d) è %d\n", x1, y1, x2, y2, dist);
        return dist;
    }

