/*palindroma.c

Visualizzare la parola inserita
Aggiornare la parola in modo che tutti i caratteri siano minuscoli, e visualizzarla
Verificare se la parola è palindroma

Stile di programmazione: Camel Case + Almann
*/

/*Program in C*/
#include <stdio.h>
#include <string.h>
#define MAX 30


/*dichiarazioni funzioni*/

/*legge frase da tastiera*/
void leggiParola(char frase[]);
/*scrive frase su schermo*/
void scriviParola(char frase[]);
/*elimina spazi*/
void minuscoloTutto(char frase[]);
/*verifica palindroma*/
void verificaPalindroma(char frase[]);

/*function main begins program execution*/
int main(void)
{
    char frase[MAX];

    leggiParola(frase);
    scriviParola(frase);
    minuscoloTutto(frase);
    verificaPalindroma(frase);
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
void minuscoloTutto(char frase[])
{
    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] >= 'A' && frase[i] <= 'Z')
        {
            frase[i] = frase[i] + ('a' - 'A'); // Converti in minuscolo
        }
    }
    printf("Frase in minuscolo: \n");
    puts(frase); /*scrive la frase su schermo*/
}
void verificaPalindroma(char frase[])
{
    int len = strlen(frase);
    int isPalindroma = 1; // Presupponiamo che sia palindroma

    for (int i = 0; i < len / 2; i++)
    {
        if (frase[i] != frase[len - i - 1])
        {
            isPalindroma = 0; // Non è palindroma
            break;
        }
    }

    if (isPalindroma)
    {
        printf("La frase e' palindroma.\n");
    }
    else
    {
        printf("La frase non e' palindroma.\n");
    }
}



