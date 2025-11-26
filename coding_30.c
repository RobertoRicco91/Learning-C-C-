// /*Program in C*/
// #include <stdio.h>

// /*function main begins program execution*/
// int main()
// {

//     int passwordUser;
//     const int passwordCorrect = 1212;
//     int tentativi = 3;

//     do
//     {
//         if (tentativi>0)
//         {
//             printf("Hai %d tentativi. Inserisci la password corretta: \n ", tentativi);   /*prompt*/
//             scanf(" %d", &passwordUser); /*read a number*/
//             tentativi--;
//             if (passwordCorrect==passwordUser)
//             {
//                 printf("Hai indovinato la password! \n");
//             }else
//             {
//                 printf("Hai sbagliato la password. \n");
//             }
//         }
//         else
//         {
//             printf("Hai esaruito i tentativi");
//         }
//     }
//     while (passwordUser != passwordCorrect);

//     return 0;/*indicate that program ended successfully*/
// }
