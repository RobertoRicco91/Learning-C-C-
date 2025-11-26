/*Program in C*/
#include <stdio.h>

/*function main begins program execution*/
int main()
{

    char scelta;

    for (size_t i = 0; i <= 20; i+=2)
    {
        do
        {
            printf("Vuoi stampare il numero %d? (s/n) \n", i);
            scanf(" %c", &scelta);

            if (scelta != 's' && scelta !='S' && scelta != 'n' && scelta != 'N')
            {
                printf("Input non valido");
            }
        }
        while (scelta != 's' && scelta !='S' && scelta != 'n' && scelta != 'N');

        if(scelta == 's' || scelta == 'S')
        {
            printf("%d \n", i);
        }
    }

    return 0;/*indicate that program ended successfully*/
}
