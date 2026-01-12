/*
moto_salone.c

Definire la struttura motocicletta che descrive una
motocicletta in base alla marca, cilindrata, anno di
immatricolazione e acquirente con nome e cognome.
Scriviamo quindi un programma in C, che dichiara
una tabella motosalone di tipo motocicletta con 5
elementi. Il programma deve consentire di inserire i dati
delle motociclette vendute e di visualizzare le marche
delle motociclette, secondo una ricerca. Inoltre deve
visualizzare il cognome dei proprietari con motociclette
che hanno una cilindrata superiore a 500 cc. Infine
occorre visualizzare il numero di motociclette
immatricolate in un determinato anno.

Stile di programmazione: Camel Case + Almann
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

/*dichiarazione strutture*/

typedef struct
{
    char marca[20];
    int cilindrata;
    int anno;
    char nome[20];
    char cognome[30];
}Motocicletta;

/*dichiarazione funzioni*/
// int menu();


/*programma*/
void main(void)
{
    int voceMenuSelezionata;
    Motocicletta motosalone[MAX];
    int i, n, anno, tot;

    char marca[20];

    do
    {
        printf("Quante motociclette vuoi inserire? (max %d): ", MAX);
        scanf("%d", &n);
    } while (n < 1 || n > MAX);

    for (i = 0; i < n; i++)
    {
        printf("\nMotocicletta %d", i + 1);
        printf("\nMarca:");
        scanf("%s", motosalone[i].marca);

        do
        {
            printf("Cilindrata:");
            scanf("%d", &motosalone[i].cilindrata);
        } while ((motosalone[i].cilindrata) < 125 || (motosalone[i].cilindrata) > 1200);

        do
        {
            printf("Anno immatricolazione:");
            scanf("%d", &motosalone[i].anno);
        } while ((motosalone[i].anno) < 1980 || (motosalone[i].anno) > 2023);

        printf("Cognome:");
        scanf("%s", motosalone[i].cognome);

        printf("Nome:");
        scanf("%s", motosalone[i].nome);
    }

    //cerca proprietari per marca
    printf("\nQuale marca di motocicletta cerchi?: ");
    scanf("%s", marca);
    for (i = 0; i < n; i++)
    {

        if (strcmp(motosalone[i].marca, marca) == 0)
            printf("%s %s\n ", motosalone[i].cognome, motosalone[i].nome);
    }

    //cerca proprietari per anno
    printf("\nQuale anno di immatricolazione cerchi?: ");
    scanf("%d", &anno);
    for (i = 0; i < n; i++)
    {
        if (motosalone[i].anno == anno)
            printf("%s %s\n ", motosalone[i].cognome, motosalone[i].nome);
    }

    //visualizza proprietari con moto > 500 cc
    printf("\n\nProprietari con motociclette di cilindrata maggiore di 500 cc:\n");
    for (i = 0; i < n; i++)
    {
        if (motosalone[i].cilindrata > 500)
            printf(" %s\n", motosalone[i].cognome);
    }

    //visualizza numero di motociclette per anno
    tot = 0;
    for (i = 0; i < n; i++)
    {
        if (motosalone[i].anno == anno)
            tot++;
    }
    printf("\nNumero di motociclette immatricolate nell'anno %d: %d\n", anno, tot);
}

// int menu()
// {
//     int voceSelezionata;
//     puts("0) exit");
//     puts("1) Inserisci moto");
//     puts("2) Visualizza moto");
//     puts("3) Cerca moto per marca");
//     puts("4) Cerca moto per anno");
//     puts("5) Visualizza proprietari con moto > 500 cc");
//     scanf("%d", &voceSelezionata);
//     while (getchar() != '\n');  // Pulisce il buffer dell'input
//     return voceSelezionata;
// }

