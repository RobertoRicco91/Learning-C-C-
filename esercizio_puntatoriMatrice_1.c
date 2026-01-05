/*Scrivi un programma che dichiara una
matrice bidimensionale di interi e un
puntatore ad essa. Assegna dei valori
alla matrice e stampa i valori
utilizzando il puntatore.
Sviluppare il programma :
Passo il puntatore al primo
elemento della matrice e uso
l’aritmetica dei puntatori */
/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>

int main(void)
{
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int *puntatoreMatrice = &matrice[0][0]; // puntatore al primo elemento della matrice

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", *puntatoreMatrice); // stampa l'elemento corrente
            puntatoreMatrice++; // sposta il puntatore al prossimo elemento
        }
        printf("\n"); // nuova linea dopo ogni riga
    }

    return 0;
}
