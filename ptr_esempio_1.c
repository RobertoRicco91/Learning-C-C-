/*Stile di programmazione: Camel Case + Almann*/
#include <stdio.h>

void swapintegers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    printf("Prima dello scambio: num1 = %d, num2 = %d\n", num1, num2);

    swapintegers(&num1, &num2);

    printf("Dopo lo scambio: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
