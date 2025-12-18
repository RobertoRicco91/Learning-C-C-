/*primoCarattereParolaMaiuscolo.c

Il programma deve svolgere le seguenti
operazioni:
Visualizzare la frase inserita
Costruire una nuova frase in cui il primo carattere
di ciascuna parola nella frase di partenza è stato
reso maiuscolo. Tutti gli altri caratteri devono
essere resi minuscoli
Visualizzare la nuova frase

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
/*converte primo carattere di ogni parola in maiuscolo*/
void firstMaiuscolo(char frase[]);

/*function main begins program execution*/
int main(void)
{
    char frase[MAX];

    leggiParola(frase);
    scriviParola(frase);
    firstMaiuscolo(frase);

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
void firstMaiuscolo(char frase[])
{
    int inizioParola = 1; // Flag per indicare l'inizio di una parola

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == ' ')
        {
            inizioParola = 1; // Il prossimo carattere sarà l'inizio di una parola
        }
        else
        {
            if (inizioParola)
            {
                // Converti il primo carattere della parola in maiuscolo
                if (frase[i] >= 'a' && frase[i] <= 'z')
                {
                    frase[i] = frase[i] - ('a' - 'A');
                }
                inizioParola = 0; // Non siamo più all'inizio della parola
            }
            else
            {
                // Converti gli altri caratteri in minuscolo
                if (frase[i] >= 'A' && frase[i] <= 'Z')
                {
                    frase[i] = frase[i] + ('a' - 'A');
                }
            }
        }
    }

    printf("Frase con primi caratteri maiuscoli: \n");
    puts(frase); /*scrive la frase su schermo*/
}



