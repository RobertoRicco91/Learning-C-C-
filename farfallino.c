/*farfallino.c

Visualizzare la frase inserita
Costruire una nuova frase nel cosiddetto “alfabeto
farfallino”
Visualizzare la nuova frase

Stile di programmazione: Camel Case + Almann
*/

/*Program in C*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
#define MAX_CRIPTO 300



/*dichiarazioni funzioni*/

/*legge frase da tastiera*/
void leggiParola(char frase[]);
/*converte frase*/
void criptaFarfallino(char frase[]);
int isVowel(char);

/*function main begins program execution*/
int main(void)
{
    char frase[MAX];
    char fraseCriptata[MAX_CRIPTO];

    leggiParola(frase);
    criptaFarfallino(frase);

    return 0;/*indicate that program ended successfully*/
}


/*definizioni funzioni*/
void leggiParola(char frase[])
{
    printf("Inserisci una frase: \n");
    gets(frase); /*legge una frase da tastiera*/
}
/*controlla se un carattere è una vocale*/
int isVowel(char carattere)
{
    int esito;
    carattere = tolower(carattere);
    if ((carattere =='a')||(carattere =='e')||(carattere =='i')||
        (carattere =='o')||(carattere =='u'))
    {
        esito = 1;
    }
    else
   {
       esito = 0;
   }

    return esito;
}

void criptaFarfallino(char frase[])
{
    char fraseCriptata[MAX_CRIPTO];
    unsigned int pos = 0;
    char carattere;

    for (int i = 0; i <= strlen(frase)-1; i++)
    {
        if (isalpha(frase[i])!=0)
        {
            carattere = tolower(frase[i]);
            if (isVowel(carattere)==1)
            {
                fraseCriptata[pos] = carattere;
                if (isupper(frase[i]))
                {
                    fraseCriptata[pos+1]='F';
                }
                else
                {
                    fraseCriptata[pos+1]='f';
                }
                fraseCriptata[pos+2]=carattere;
                pos=pos+3;
            }
            else
            {
                fraseCriptata[pos] = frase[i];
                pos+=1;
            }
        }
        else
        {
            fraseCriptata[pos] = frase[i];
            pos+=1;
        }
    }
    fraseCriptata[pos] = '\0';  /*termina la frase*/

    printf("Frase in alfabeto farfallino: %s\n",fraseCriptata);
}




