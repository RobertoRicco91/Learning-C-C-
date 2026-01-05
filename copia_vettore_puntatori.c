/*Copia un vettore di caratteri in un altro
vettore utilizzando i puntatori e
l’artimentica dei puntatori.*/
/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>
void main(void)
{
    char vettore[5] = {'a', 'b', 'c', 'd', 'e'};
    char *vettorePtr[5]; // array di puntatori a caratteri
    char vettoreCopia[5]; // array per copiare i caratteri

    // Inizializza l'array di puntatori
    for(int i = 0; i < 5; i++)
    {
        vettorePtr[i] = &vettore[i]; // ogni puntatore punta al corrispondente elemento di vettore
    }

    // Copia i caratteri dal vettore originale al vettore di copia
    for(int i = 0; i < 5; i++)
    {
        vettoreCopia[i] = *(vettorePtr[i]); // copia il carattere puntato dal puntatore
    }

    // Stampa il vettore copiato
    printf("Vettore copiato: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%c", vettoreCopia[i]);
    }
    printf("\n");


}
