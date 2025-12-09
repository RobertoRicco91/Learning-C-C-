/*funzioneVariadica.c
Scrivere una funzione "print_numbers" che accetta un numero
arbitrario di argomenti interi e stampa ciascun numero su una
riga separata.
Testare la funzione con diversi set di interni in input*/

/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>




/*dichiarazioni funzioni*/
void print_numbers(int num_args, ...);


/*function main begins program execution*/
int main(void)
{
    // chiamata della funzione print_numbers con 3 argomenti
    print_numbers(3, 1, 23, 67); //il primo parametro è il numero dei parametri successivi che passo

    return 0;/*indicate that program ended successfully*/
}

/*definizioni funzioni*/
void print_numbers(int num_args, ...)
{
    int parametroCorrente;
    va_list arg_list;
    va_start(arg_list, num_args); //tutti i parametri passati vengono inseriti nella lista arg_list

    for (int i = 0; i < num_args; i++)
    {
        parametroCorrente = va_arg(arg_list, int); //estrae gli argomenti dalla lista uno per volta
        printf("%d\n", parametroCorrente);
    }

    va_end(arg_list);
}
