/*Scrivi un programma che dichiara una
matrice bidimensionale di interi e un
puntatore ad essa. Assegna dei valori
alla matrice e stampa i valori
utilizzando il puntatore.
Sviluppare il programma :
Passo la matrice usando il
parametro matrix[][COLS]*/
/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>
#define ROWS 3
#define COLS 3

void printMatrix (int [][COLS]);

int main(void)
{
    int matrice[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("Matrice:\n");
    printMatrix(matrice);

    return 0;
}

void printMatrix(int matrix[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
