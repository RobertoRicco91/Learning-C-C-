/*cercaCarattereInStringaPosizioni.c

Stile di programmazione: Camel Case + Almann
*/

/*Program in C*/
#include <stdio.h>
#define MAXSTRING 30



/*function main begins program execution*/
int main(void)
{

    char sa[MAXSTRING]="Tarantella tristemente triste";
    char c='t';
    int i, trovato=0;

    for (i = 0; sa[i] != '\0'; i++)
    {
        if (sa[i] == c)
        {
            trovato = 1;
            printf("Carattere '%c' trovato alla posizione %d\n", c, i+1);
        }
    }


    return 0;/*indicate that program ended successfully*/
}



