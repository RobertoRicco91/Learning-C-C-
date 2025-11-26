// /*Program in C*/
// #include <stdio.h>

// /*function main begins program execution*/
// int main()
// {
//     int pos, c;
//     int i=0;

//     printf("Inserisci un numero intero positivo\n");
//     scanf("%d", &pos); /*read a number*/

//     while (pos <= 0)
//     {
//         printf("Inserisci un numero intero positivo\n");
//         scanf("%d", &pos); /*read a number*/
//     }

//     while (pos>0)
//     {
//         if(pos % 2 == 0)
//         {
//             c=pos % 10;
//             i++;
//             pos /= 10;
//         }
//         else
//         {
//             c=pos % 10;
//             pos /= 10;
//         }
//     }

//     printf("Il numero di cifre pari sono: %d\n", i);

//     return 0;/*indicate that program ended successfully*/
// }
