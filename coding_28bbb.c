// /*Program in C*/
// #include <stdio.h>

// /*function main begins program execution*/
// int main()
// {
//     int n = 0;
//     int nDump;
//     char scelta = 's';

//     while (scelta == 's')
//     {
//         if (n == 0)
//         {
//             printf("Inserisci un numero intero: \n");   /*prompt*/
//             scanf(" %d", &n);   /*read a number*/
//         }
//         else if (n>=0)
//         {
//             nDump=n;
//             printf("Inserisci un altro numero e ti dico se è una sequenza oppure no: \n");   /*prompt*/
//             scanf(" %d", &n); /*read a number*/

//             if (nDump < n)
//             {
//                 printf("Sono una sequenza crescente. \n");
//             }
//             else
//             {
//                 printf("Sono una sequenza decrescente. \n");
//             }

//             printf("Vuoi fare un altro controllo? (s/n): \n");   /*prompt*/
//             scanf(" %c", &scelta);  /*read a letter*/

//             n = 0;
//         }
//         else if(scelta != 's'){
//             printf("Arrivederci! \n");
//         }
//     }

//     return 0;/*indicate that program ended successfully*/
// }
