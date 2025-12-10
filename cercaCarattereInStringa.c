/*cercaCarattereInStringa.c

Stile di programmazione: Camel Case + Almann
*/

/*Program in C*/
#include <stdio.h>


/*dichiarazioni funzioni*/

/*function main begins program execution*/
int main(void)
{

    char stringa[20], carattereDaCercare;
    int i, trovato = 0;

    printf("Inserisci una stringa (max 19 caratteri): ");
    scanf("%s", stringa);

    printf("Inserisci il carattere da cercare: ");
    scanf("%c", &carattereDaCercare);

    for (i = 0; stringa[i] != '\0'; i++)
    {
        if (stringa[i] == carattereDaCercare)
        {
            trovato = 1;
            printf("Carattere '%c' trovato alla posizione %d\n", carattereDaCercare, i+1);
        }
    }


    return 0;/*indicate that program ended successfully*/
}

/*definizioni funzioni*/


