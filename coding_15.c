/*Program in C*/
#include <stdio.h>

/*function main begins program execution*/
int main()
{
    char scelta; /*Variabile inserita da utente*/

    printf("a)Voce di menù: 1 \n");   /*prompt*/
    printf("b)Voce di menù: 2 \n");   /*prompt*/
    printf("c)Voce di menù: 3 \n");   /*prompt*/
    printf("Seleziona un menù \n");   /*prompt*/
    scanf(" %c", &scelta);  /*read a letter*/


    printf("Hai selezionato l'opzione %d",(scelta=='a')*1+(scelta=='b')*2+(scelta=='c')*3); /*variabile per opzione scelta*/

    return 0;/*indicate that program ended successfully*/
}
