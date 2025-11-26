// /*Program in C*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #define MAX_TENTATIVI 10


// /*function main begins program execution*/
// int main()
// {
//     int tentativi=0;
//     int numeroSegreto, numeroUtente;
//     int indovinato=0;

//     srand(time(0)); /*funzione per mettere il seed del numero casuale*/
//     numeroSegreto = rand() % 10 +1 ;    /*genera un numero casuale tra 1 e 10*/

//     while ((indovinato==0) && (tentativi<MAX_TENTATIVI))
//     {
//         printf("Inserisci un numero tra 1 e 10: \n");   /*prompt*/
//         scanf("%d", &numeroUtente); /*read a number*/

//         if (numeroUtente==numeroSegreto)
//         {
//             indovinato=1;
//             tentativi=tentativi+1;
//             printf("Hai vinto al %d tentativo! \n", tentativi); /*print message*/
//         }
//         else if(numeroUtente>numeroSegreto)
//         {
//             printf("Mi dispiace, il numero segreto é piú piccolo. \n"); /*print message*/
//             tentativi=tentativi+1;
//         }
//         else
//         {
//             printf("Mi dispiace, il numero segreto é piú grande. \n"); /*print message*/
//             tentativi=tentativi+1;
//         }
//     }

//     if (indovinato==0)
//     {
//         printf("Mi dispiace, hai perso. IL numero segreto è: %d\n", numeroSegreto);
//     }
//     else
//     {
//         printf("Hai vinto! Il numero segreto è %d \n", numeroSegreto);
//     }

//     return 0;/*indicate that program ended successfully*/
// }
