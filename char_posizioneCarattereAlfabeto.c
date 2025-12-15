/*char_posizioneCarattereAlfabeto.c

Leggere un carattere e se è una lettera dire
qual è la sua posizione nell’alfabeto.

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

    if
        ((ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z'))
    {
        int posizione;
        if (ch >= 'A' && ch <= 'Z') {
            posizione = ch - 'A' + 1; // Calcola la posizione per maiuscole
        } else {
            posizione = ch - 'a' + 1; // Calcola la posizione per minuscole
        }
        printf("Il carattere %c e' alla posizione %d nell'alfabeto.\n", ch, posizione);
    }
    else
    {
        printf("Errore di inserimento\n");
    }

    return 0;/*indicate that program ended successfully*/
}


