/*Program in C*/
#include <stdio.h>

/*function main begins program execution*/
int main()
{
    int i = 1;
    int prodotto = 1;

    while (i<=11)
    {
        if (i % 2 != 0)
        {
            prodotto = prodotto * i;
        }
        i++;
        printf("%d\n", prodotto);
    }

    return 0;/*indicate that program ended successfully*/
}
