/*eliminaSpaziString.c

Scrivere un programma in linguaggio C che:
Legga da input una frase (di lunghezza massima pari a 100 caratteri), che può
contenere spazi.
Elimini tutti gli spazi presenti nella frase.
Visualizzi a video la frase risultante, senza spazi.
-->Vincoli
• La frase deve essere memorizzata in un array di caratteri null terminated.
• Il programma deve essere strutturato utilizzando funzioni.
-->Indicazioni
• La rimozione degli spazi deve avvenire modificando direttamente l’array
che contiene la frase.
• L’ordine dei caratteri diversi dallo spazio deve essere preservato.

Stile di programmazione: Camel Case + Almann
*/

/*Program in C*/
#include <stdio.h>
#include <string.h>
#define MAX 100


/*dichiarazioni funzioni*/

/*legge frase da tastiera*/
void leggiParola(char frase[]);
/*scrive frase su schermo*/
void scriviParola(char frase[]);
/*elimina spazi*/
void eliminaSpazi(char frase[]);

/*function main begins program execution*/
int main(void)
{
    char frase[MAX];

    leggiParola(frase);
    scriviParola(frase);
    eliminaSpazi(frase);
    scriviParola(frase);
    return 0;/*indicate that program ended successfully*/
}


/*definizioni funzioni*/
void leggiParola(char frase[])
{
    printf("Inserisci una frase: \n");
    gets(frase); /*legge una frase da tastiera*/
}

void scriviParola(char frase[])
{
    printf("La frase inserita e': \n");
    puts(frase); /*scrive la frase su schermo*/
}
void eliminaSpazi(char frase[])
{
    int i, j = 0;
    char fraseSenzaSpazi[MAX];

    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] != ' ')
        {
            fraseSenzaSpazi[j] = frase[i];
            j++;
        }
    }
    fraseSenzaSpazi[j] = '\0'; // Termina la nuova stringa

    // Copia la stringa senza spazi nella stringa originale
    strcpy(frase, fraseSenzaSpazi);
}


