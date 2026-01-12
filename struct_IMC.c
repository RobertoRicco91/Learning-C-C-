/*scrivere un programma che svolga le seguenti operazioni:
- acquisisca informazioni relative a carattesistiche fisiche di 10 persone.
- ogni informazione è composta da peso , altezza ed età
- terminata la fase di acquisizione , stampi sullo schermo le informazioni relatice a tuttw le persome per le quali il valore dell' età è <= 20.
- Tutte le persone che presentano un IMC < 25
(sottopeso) o >30 (sovrappeso)*/
/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>
#define MAX 10


typedef struct Persona
{
    float peso;
    float altezza;
    int eta;
    float IMC;
};

float calcolaIMC(float peso, float altezza);

void stampaPersona(struct Persona);

int main(void)
{
    struct Persona user[MAX];
    int i;
    for (i = 0; i < MAX; i++)
    {
        printf("Inserisci il peso della persona %d: ", i + 1);
        scanf("%f", &user[i].peso);
        printf("Inserisci l'altezza della persona %d: ", i + 1);
        scanf("%f", &user[i].altezza);
        printf("Inserisci l'eta della persona %d: ", i + 1);
        scanf("%d", &user[i].eta);
        user[i].IMC = calcolaIMC(user[i].peso, user[i].altezza);
    }
    for (i = 0; i < MAX; i++)
    {
        if (user[i].eta <= 20)
        {
            printf("\nInformazioni della persona %d con eta' <= 20:\n", i + 1);
            stampaPersona(user[i]);
        }
        if (user[i].IMC < 25 || user[i].IMC > 30)
        {
            printf("\nInformazioni della persona %d con IMC < 25 o > 30:\n", i + 1);
            stampaPersona(user[i]);
        }
    }
    return 0;
}

float calcolaIMC(float peso, float altezza)
{
    float IMC;
    IMC = peso / (altezza * altezza);
    return IMC;
}

void stampaPersona(struct Persona p)
{
    printf("Peso: %.2f kg\n", p.peso);
    printf("Altezza: %.2f m\n", p.altezza);
    printf("Eta': %d anni\n", p.eta);
    printf("IMC: %.2f\n", p.IMC);
}

