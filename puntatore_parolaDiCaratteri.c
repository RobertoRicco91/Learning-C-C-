/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>

void stampaParola(char *parolaPtr); // funzione che stampa la parola

int main()
{
    char miaParola[] = "CiaoMondo"; // definizione di una parola come array di caratteri
    stampaParola(miaParola); // chiamata alla funzione passando l'array
    return 0;
}

void stampaParola(char *parolaPtr)
{
    while(*parolaPtr != '\0') // ciclo fino al carattere di terminazione della stringa
    {
        printf("%c", *parolaPtr); // stampa il carattere corrente
        parolaPtr++; // sposta il puntatore al carattere successivo
    }
    printf("\n"); // stampa una nuova linea alla fine
}
