/*
moto_salone.c

Definire la struttura alunno che descrivere un alunno in base
al nome, cognome, nerrori. Scriviamo quindi un programma in C, che dichiara
una tabella alunni di tipo alunno che permette di inserire 20 studenti. Il
programma deve consentire di inserire i dati di un quiz somministrato agli
alunni e di memorizzare le risposte in una matrice.
Realizzare un menù che consente, dopo l’inserimento degli alunni e delle
risposte corrette del quiz di visualizzare le risposte sbagliate per ciascun
alunno, visualizzi gli alunni che hanno superato il quiz con il conteggio degli
errori commessi ed effettui una ricerca per alunno.

Stile di programmazione: Camel Case + Almann
*/

#include <stdio.h>
#include <string.h>

#define MAX_ALUNNI 3
#define MAX_DOMANDE 3

/*dichiarazione strutture*/
typedef struct
{
    char nome[20];
    char cognome[30];
    int nErrori;
}ALUNNO;

ALUNNO alunni[MAX_ALUNNI];

int quiz[MAX_DOMANDE];
int risposte[MAX_ALUNNI][MAX_DOMANDE];



/*dichiarazione funzioni*/
void inserisciDati();
int menu();
void printErrori();
void risposteDate();
void searchAlunni();




/*programma*/
int main()
{
    int voceMenuSelezionata;

    inserisciDati();

    while ((voceMenuSelezionata = menu()) != 4)
    {
        switch (voceMenuSelezionata)
        {
            case 1:
                printErrori();
                break;
            case 2:
                risposteDate();
                break;
            case 3:
                searchAlunni();
                break;
            case 4:
                break;
        }
    }
    return 0;
}



void inserisciDati()
{
    int i, j;

    /*inserimento dati alunno*/
    for (i = 0; i < MAX_ALUNNI; i++)
    {
        printf("Inserisci nome alunno %d: ", i + 1);
        scanf("%s", alunni[i].nome);
        printf("Inserisci cognome alunno %d: ", i + 1);
        scanf("%s", alunni[i].cognome);
    }

    printf("\n-Inserisci le risposte corrette del quiz-\n");
    for (i = 0; i < MAX_DOMANDE; i++)
    {
        printf("\nRisposta %d:\n", i + 1);
        scanf("%s", &quiz[i]);
    }

    printf("\nInserisci le risposte degli studenti:\n");
    for (i = 0; i < MAX_DOMANDE; i++)
    {
        printf("\nRisposta dello studente:\n Nome: %s\n Cognome: %s\n", alunni[i].nome, alunni[i].cognome);
        for (j = 0; j < MAX_DOMANDE; j++)
        {
            printf("\nRisposta %d: ", j + 1);
            scanf("%d", &risposte[i][j]);
        }
    }
}

int menu()
{
    int condition=0;
    do
    {
        printf("\n1) exit");
        printf("\n2) Visualizza risposte sbagliate degli studenti");
        printf("\n3) Visualizza risposte degli studenti");
        printf("\n4) Ricerca per alunno\n");
        scanf("%d", &condition);
    }while (condition < 1 || condition > 4);
    return condition;
}

void printErrori()
{
    int i,j;

    for (i = 0; i < MAX_ALUNNI; i++)
    {
        alunni[i].nErrori = 0;
    }

    for (i = 0; i < MAX_ALUNNI; i++)
    {
        for (j = 0; j < MAX_DOMANDE; j++)
        {
            if (risposte[i][j] != quiz[j])
            {
                alunni[i].nErrori= alunni[i].nErrori + 1;
            }
        }
        printf("\nAlunno: %s %s, errori %d", alunni[i].cognome, alunni[i].nome, alunni[i].nErrori);
    }
}

void risposteDate()
{
    int i,j;
    for (i = 0; i < MAX_ALUNNI; i++)
    {
        alunni[i].nErrori = 0;
    }

    for (i = 0; i < MAX_ALUNNI; i++)
    {
        printf("\nAlunno: %s %s.\nRisposte date:.\n", alunni[i].cognome, alunni[i].nome);
        for (j = 0; j < MAX_DOMANDE; j++)
        {
            printf("\nDomanda: %d\nRisposta data:\n %d\nRisposta corretta:\n %d", j + 1, risposte[i][j], quiz[j]);
        }
    }
}

void searchAlunni()
{
    char cognome[40];
    int i,j, trovato=0;

    for(i=0;i<MAX_ALUNNI;i++)
        alunni[i].nErrori=0; //azzeriamo gli errori

    printf("\nQuale alunno cerchi? digita il cognome:");
    scanf("%s", cognome);

    for (i=0; i<MAX_ALUNNI; i++){
        if(strcmp(alunni[i].cognome,cognome)==0) {
            printf("\n\n Nome: %s\n Risposte date: ", alunni[i].nome);

            for (j=0;j<MAX_DOMANDE; j++) {
                printf(" %d ", risposte[i][j]);
                if (risposte[i][j]!=quiz[j])
                    alunni[i].nErrori=alunni[i].nErrori+1;
                }
            printf("\n Errori totali: %d ", alunni[i].nErrori);
            if (alunni[i].nErrori<MAX_DOMANDE)
                printf("\n Esame superato!");
            else
                printf("\n Esame non superato, studia e riprova!");
            trovato=1;
         }
    }
    if (trovato==0)
            printf("\nNon e' presente nessun alunno:");
}






