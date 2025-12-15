#include <stdio.h>

/*funzione per salvare carattere e confrontare*/
void salvaCarattere(char ch, char ch2){
   printf("Inserisci carattere : \n");
   ch = getchar();
   while (getchar() != '\n'); // svuota il buffer stdio
   printf("Inserisci secondo carattere : \n");
   ch2 = getchar();
   printf("Caratteri salvati: %c %c\n", ch, ch2);
   if ((ch >= '1' && ch <= '8') && (ch2 >= 'A' && ch2 <= 'Z')) {
       printf("La sequenza %c%c rappresenta il nome di una classe di alunni.\n", ch, ch2);
   } else {
       printf("La sequenza %c%c non rappresenta il nome di una classe di alunni.\n", ch, ch2);
   }
}
