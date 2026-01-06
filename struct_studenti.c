/*Scrivere un programma in c che chiede i dati di
uno studente (nome e cognome, numero
tessera, matricola) e li conferma sul terminale.
Aggiungere in un secondo momento la
possibilità di inserire dati di un numero n di
studenti.*/
/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>
#include <string.h>


struct STUDENTE
{
    char nome[30];
    char cognome[30];
    int numeroTessera;
    int matricola;
};

int main(void)
{
    int n, i;

    printf("Quanti studenti vuoi inserire? ");
    scanf("%d", &n);

    struct STUDENTE studenti[n];

    for(i = 0; i < n; i++)
    {
        printf("Inserisci il nome dello studente %d: ", i + 1);
        scanf("%s", studenti[i].nome);
        printf("Inserisci il cognome dello studente %d: ", i + 1);
        scanf("%s", studenti[i].cognome);
        printf("Inserisci il numero tessera dello studente %d: ", i + 1);
        scanf("%d", &studenti[i].numeroTessera);
        printf("Inserisci la matricola dello studente %d: ", i + 1);
        scanf("%d", &studenti[i].matricola);
    }

    printf("\nDati inseriti:\n");
    for(i = 0; i < n; i++)
    {
        printf("Studente %d: %s %s, Numero Tessera: %d, Matricola: %d\n",
               i + 1, studenti[i].nome, studenti[i].cognome,
               studenti[i].numeroTessera, studenti[i].matricola);
    }

    return 0;
}
