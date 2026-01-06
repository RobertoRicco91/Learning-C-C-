/*Scrivere un programma in c che chiede all’utente
due numeri complessi e li somma attraverso una
funzione scritta appositamente.
Usare una struct per rappresentare un numero
complesso (parte intera, parte immaginaria).
N.B.: ti ricordo che la somma di due numeri
complessi è sempre un numero complesso avente
la parte reale pari alla somma delle parti reali e
parte immaginaria pari alla somma delle parti
immaginarie.
Es. X1= 3+4i; X2= 5+8i => X3 = X1+X2=8+12ì*/
/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>


struct COMPLESSO
{
    float reale;
    float immaginaria;
};

void sommaComplessi(struct COMPLESSO c1, struct COMPLESSO c2, struct COMPLESSO *risultato);

int main(void)
{
    struct COMPLESSO num1, num2, somma;

    // Input del primo numero complesso
    printf("Inserisci la parte reale del primo numero complesso: ");
    scanf("%f", &num1.reale);
    printf("Inserisci la parte immaginaria del primo numero complesso: ");
    scanf("%f", &num1.immaginaria);

    // Input del secondo numero complesso
    printf("Inserisci la parte reale del secondo numero complesso: ");
    scanf("%f", &num2.reale);
    printf("Inserisci la parte immaginaria del secondo numero complesso: ");
    scanf("%f", &num2.immaginaria);

    // Somma dei numeri complessi
    sommaComplessi(num1, num2, &somma);

    // Output del risultato
    printf("La somma dei numeri complessi è: %.2f + %.2fi\n", somma.reale, somma.immaginaria);

    return 0;
}

void sommaComplessi(struct COMPLESSO c1, struct COMPLESSO c2, struct COMPLESSO *risultato)
{
    risultato->reale = c1.reale + c2.reale;
    risultato->immaginaria = c1.immaginaria + c2.immaginaria;
}

