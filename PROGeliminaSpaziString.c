/*esercizio_semplice_stringhe.c

Scrivere un programma che ha
due funzioni:
1) Funzione leggiParola(..) che
legge una parola usando gets()
2) Funzione scriviParola(..) che
scrive su schermo una parola
usando puts()

Stile di programmazione: Camel Case + Almann
*/

/*Program in C*/
#include <stdio.h>
#include <string.h>
#define MAX 50

/*dichiarazioni funzioni*/

/*legge parola da tastiera*/
void leggiParola(char parola[]);
/*scrive parola su schermo*/
void scriviParola(char parola[]);

/*function main begins program execution*/
int main(void)
{
    char parola[MAX];

    leggiParola(parola);
    scriviParola(parola);
    return 0;/*indicate that program ended successfully*/
}


/*definizioni funzioni*/
void leggiParola(char parola[])
{
    printf("Inserisci una parola: \n");
    gets(parola); /*legge una parola da tastiera*/
}

void scriviParola(char parola[])
{
    printf("La parola inserita e': \n");
    puts(parola); /*scrive la parola su schermo*/
}

