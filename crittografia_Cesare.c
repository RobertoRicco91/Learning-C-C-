/*crittografia_Cesare.c

Caio Giulio Cesare aveva individuato un metodo infallibile per far
arrivare messaggi in sicurezza alle sue legioni. In pratica scriveva
un messaggio spostando la sequenza di caratteri nelle parole di
un certo numero di posizioni nell’alfabeto (shift). Conoscendo i
caratteri del testo ed il numero di posizioni di shift si poteva
procedere alla codifica ed alla decodifica del messaggio.

Es. se il messaggio è «casa» dopo la codifica con
shift pari a 4 diventa «geze»

Scrivere un programma che implementa questa codifica ed
effettui anche la decodifica

Stile di programmazione: Camel Case + Almann
*/

/*Program in C*/
#include <stdio.h>
#include <string.h>
#define MAX 100

/*programma*/

void main(void)
{
    char frase[MAX];
    int SHIFT;
    int i;

    printf("Inserisci una frase: \n");
    gets(frase);

    printf("Quanti caratteri deve essere spostato? \n");
    scanf("%d", &SHIFT);

    /*codifica*/
    for(i=0;i<strlen(frase);i++)
    {
        /*solo lettere minuscole*/
        if(frase[i]>='a' && frase[i]<='z')
        {
            frase[i]=frase[i]+SHIFT;
        }
        else if(frase[i]>='A' && frase[i]<='Z')
        {
            frase[i]=frase[i]+SHIFT;
        }
    }

    printf("Frase codificata:\n%s\n", frase);

    /*decodifica*/
    for(i=0;i<strlen(frase);i++)
    {
        /*solo lettere minuscole*/
        if(frase[i]>='a' && frase[i]<='z')
        {
            frase[i]=frase[i]-SHIFT;
        }
        else if(frase[i]>='A' && frase[i]<='Z')
        {
            frase[i]=frase[i]-SHIFT;
        }
    }

    printf("Frase decodificata:\n%s\n", frase);
}


