/*daiCarte4Giocatori.c

Scrivi un programma
in C che mischia un
mazzo di 52 carte e ne
distribuisce un egual
numero a max 4
giocatori.
Per mischiare le carte puoi usare una matrice di
interi di 4 righe (i semi) x 13 colonne (le carte). In
ogni cella puoi scrivere a caso un numero da 1 a 52

Stile di programmazione: Camel Case + Almann
*/

/*Program in C*/
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define NUMERO_CARTE 52
#define NUMERO_SEMI 4
#define NUMERO_SCALA 13

void mischia_carte(unsigned int mazzo[NUMERO_SEMI][NUMERO_SCALA]);
void azzeraMazzo(unsigned int mazzo[NUMERO_SEMI][NUMERO_SCALA]);
void dai_carte(unsigned int mazzo[NUMERO_SEMI][NUMERO_SCALA], unsigned int numeroGiocatori,unsigned int cartePerGiocatore);
void visualizza_mazzo(unsigned int mazzo[NUMERO_SEMI][NUMERO_SCALA]);

void main()
{
    unsigned int mazzo[NUMERO_SEMI][NUMERO_SCALA];
    int altroGiro=1;
    unsigned int numeroCarteRimaste=NUMERO_CARTE;
    unsigned int cartePerGiocatore=4;
    unsigned int numeroGiocatori=4;
    char risposta;
    while (altroGiro==1){

        mischia_carte(mazzo);
        visualizza_mazzo(mazzo);
        dai_carte(mazzo,numeroGiocatori,cartePerGiocatore);
        printf("Altro giro?: (y/n):");
        scanf("%c",&risposta);
        while(getchar()!='\n'); //svuoto stdin

        if (risposta == 'y'){
            altroGiro=1;
        }
        else{
            altroGiro=0;
        }
    }
}

void visualizza_mazzo(unsigned int mazzo[NUMERO_SEMI]
[NUMERO_SCALA])
{
    for(int j=0;j<NUMERO_SEMI;j++)
    {
         switch (j)
         {
              case 0: printf("cuori  :");break;
              case 1: printf("quadri :");break;
              case 2: printf("fiori  :");break;
              case 3: printf("picche :");break;
         }
         for(int k=0;k<NUMERO_SCALA;k++)
         {
             printf("-%d",mazzo[j][k]);
          }
          printf("\n");
    }
    printf("\n\n\n");
}

void azzeraMazzo(unsigned int mazzo[NUMERO_SEMI][NUMERO_SCALA])
{
    for(int i=0;i<NUMERO_SEMI;i++)
        for(int j=0;j<NUMERO_SCALA;j++)
            mazzo[i][j]=0;
}

void mischia_carte(unsigned int mazzo[NUMERO_SEMI][NUMERO_SCALA])
{
    unsigned int riga,colonna;
    srand(time(0));
    azzeraMazzo(mazzo);
    for(int i=1;i<=NUMERO_CARTE;i++)
    {
        do
        {
            riga=rand()%(NUMERO_SEMI);
            colonna=rand()%(NUMERO_SCALA);
        }
        while(mazzo[riga][colonna]!=0);
        mazzo[riga][colonna]=i;
    }
}

void dai_carte(unsigned int mazzo[NUMERO_SEMI][NUMERO_SCALA],unsigned int numeroGiocatori,unsigned int cartePerGiocatore)
{
    unsigned int riga,colonna;
    char* semi[NUMERO_SEMI]={"Cuori","Quadri","Fiori","Picche"};
    char* carte[NUMERO_SCALA]={"asso","due","tre","quattro","cinque","sei","sette","otto","nove","dieci","jack","regina","kappa"};
    for(int i=1;i<=numeroGiocatori;i++)
    {
        printf("Giocatore %d:\n",i);
        for(int j=1;j<=cartePerGiocatore;j++)
        {
            do
            {
                riga=rand()%(NUMERO_SEMI);
                colonna=rand()%(NUMERO_SCALA);
            }
            while(mazzo[riga][colonna]==0);
            printf("%s di %s - ", carte[colonna], semi[riga]);
            mazzo[riga][colonna]=0; //carta data viene azzerata nel mazzo
        }
        printf("\n");
    }
    visualizza_mazzo(mazzo);
}
