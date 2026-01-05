#include <stdio.h>

int main(void)
{
    int nomeVariabile = 10; /*dichiara la variabile int*/
    int *p;               /*dichiara un puntatore a var di tipo int*/
    p = &nomeVariabile; /*assegna al puntatore l'indirizzo di nomeVariabile*/
    printf("Contenuto della variabile nomeVariabile: %d \n", nomeVariabile);    /*stampa il contenuto della variabile*/
    printf("Indirizzo di memoria di nomeVariabile: %d \n", &nomeVariabile);  /*stampa l'indirizzo di memoria della variabile nomeVariabile*/
    printf("Contenuto di p che è l'indirizzo della variabile nomeVariabile: %d \n", p);                      /*stampa il contenuto del puntatore (indirizzo di nomeVariabile)*/
    printf("contenuto della variabile puntata da p ovvero di nomeVariabile: %d \n", *p); /*stampa il contenuto della variabile puntata da p ovvero di nomeVariabile*/
    printf("Indirizzo di memoria del puntatore p: %d \n", &p);                      /*stampa l'indirizzo di memoria del puntatore p*/
}
