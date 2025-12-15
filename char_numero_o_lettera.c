/*char_numero_o_lettera.c

Dato in ingresso un carattere, visualizzare il
messaggio "Carattere valido" se il carattere è una
cifra numerica oppure una lettera dell'alfabeto
(indifferentemente maiuscola o minuscola). In caso
contrario emettere il messaggio "Errore di
inserimento"

Stile di programmazione: Camel Case + Almann
*/

/*Program in C*/
#include <stdio.h>


/*function main begins program execution*/
int main(void)
{
    char ch;
    printf("Inserisci un carattere: \n");
    ch = getchar();

    if ((ch >= '0' && ch <= '9') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z'))
    {
        printf("Carattere valido\n");
    }
    else
    {
        printf("Errore di inserimento\n");
    }

    return 0;/*indicate that program ended successfully*/
}


