// /*Program in C*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// /*function main begins program execution*/
// int main()
// {
//     srand(time(0)); /*funzione per mettere il seed del numero casuale*/
//     int numeroSegreto = rand() % 10 +1 ;    /*genera un numero casuale tra 1 e 10*/
//     int numeroUtente; /*Variabile inserita dall'utente*/

//     printf(" Scegli un numero tra 1 e 10 per vincere fantastici premi\n Hai 3 tentativi. \n Start: \n "); /*prompt*/
//     scanf("%d", &numeroUtente); /*read a number*/

//     // CONTROLLO DEL NUMERO INSERITO
//     if(numeroUtente > 10 || numeroUtente < 1)
//     {
//         printf(" Mi dispiace, il numero inserito non è tra 1 e 10.\n"); /*print message*/
//         return 0; /*indicate that program ended successfully*/
//     }

//     // START THE GAME
//     if(numeroUtente == numeroSegreto) /*PRIMO TENTATIVO (1) */
//     {
//         printf(" Hai vinto al primo tentativo! "); /*print message*/
//     }
//     else
//     {
//         if(numeroUtente > numeroSegreto) /*if statements per aiutare l'utente*/
//         {
//             printf(" Mi dispiace, il numero segreto é piú piccolo. \n"); /*print message*/
//         }
//         else
//         {
//             printf(" Mi dispiace, il numero segreto é piú grande. \n"); /*print message*/
//         }
//         printf(" Riprova: hai ancora 2 tentativi \n Start: \n"); /*prompt*/
//         scanf("%d", &numeroUtente); /*read a number*/

//         if(numeroUtente == numeroSegreto) /*SECONDO TENTATIVO (2) */
//         {
//             printf(" Hai vinto al secondo tentativo! "); /*print message*/
//         }
//         else
//         {
//             if (numeroUtente > numeroSegreto)
//             {
//                 printf(" Mi dispiace, il numero segreto é piú piccolo. \n"); /*print message*/
//             }
//             else
//             {
//                 printf(" Mi dispiace, il numero segreto é piú grande. \n"); /*print message*/
//             }
//             printf(" Riprova: hai ancora 1 tentativo \n Start: \n");
//             scanf("%d", &numeroUtente); /*read a number*/

//             if (numeroUtente == numeroSegreto) /*ULTIMO TENTATIVO (3)*/
//             {
//                 printf(" Hai vinto con l'ultimo tentativo. \n"); /*print message*/
//             }
//             else
//             {
//                 printf(" Game over, il numero segreto é %d. \n", numeroSegreto); /*print message*/
//             }
//         }
//     }

//     // if(numeroUtente == numeroSegreto) /*primo tentativo (1) */
//     // {
//     //     printf("Hai vinto al primo tentativo!"); /*print message*/
//     // }
//     // else
//     // {
//     //     if (numeroUtente > numeroSegreto) /*if statements per aiutare l'utente*/
//     //     {
//     //         printf("Mi dispiace, il numero segreto é piú piccolo.\n Scegli un numero tra 1 e 10 per vincere fantastici premi!\n"); /*print message*/
//     //     }
//     //     else /*if statements per aiutare l'utente*/
//     //     {
//     //         printf("Mi dispiace, il numero segreto é piú grande.\n Scegli un numero tra 1 e 10 per vincere fantastici premi\n Hai 2 tentativi.\n Start: \n"); /*print message*/
//     //     }
//     //     printf("Riprova: hai ancora 2 tentativi\n Start: \n"); /*prompt*/
//     //     scanf("%d", &numeroUtente); /*read a number*/

//     //     if(numeroUtente == numeroSegreto) /*secondo tentativo (2)*/
//     //     {
//     //         printf("Hai vinto al terzo tentativo!"); /*print message*/
//     //     }
//     //     else
//     //     {
//     //         if(numeroUtente > numeroSegreto) /*if statements per aiutare l'utente*/
//     //         {
//     //             printf("Mi dispiace, il numero segreto é piú piccolo.\n Scegli un numero tra 1 e 10 per vincere fantastici premi!\n"); /*print message*/
//     //         }
//     //         else
//     //         {
//     //             printf("Mi dispiace, il numero segreto é piú grande.\n"); /*print message*/
//     //         }
//     //         printf("Riprova: hai ancora 1 tentativo\n Start: \n"); /*prompt*/
//     //         scanf("%d", &numeroUtente); /*read a number*/
//     //         if(numeroUtente == numeroSegreto) /*if statements per verificare il numero corretto*/
//     //         {
//     //             printf("Hai vinto al secondo tentativo!"); /*print message*/
//     //         }
//     //         else
//     //         {
//     //             if(numeroUtente > numeroSegreto) /*if statements per aiutare l'utente*/
//     //             {
//     //                 printf("Mi dispiace, il numero segreto é piú piccolo.\n Scegli un numero tra 1 e 10 per vincere fantastici premi\n Hai 1 tentativo.\n Start: \n"); /*print message*/
//     //             }
//     //             else
//     //             {
//     //                 printf("Mi dispiace, il numero segreto é piú grande.\n"); /*print message*/
//     //             }
//     //             printf("Game over; il numero segreto era: %d\n", numeroSegreto); /*prompt*/
//     //         }
//     //     }
//     // }
//     return 0;   /*indicate that program ended successfully*/
// }
