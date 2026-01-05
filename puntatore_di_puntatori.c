#include <stdio.h>

int main(void)
{
    int a = 5;
    int *p1;
    p1 = &a;
    int **p2;
    p2 = &p1;
    printf("Indirizzo di a: %d\nIndirizzo di p1: %d\nIndirizzo di p2: %d\n", &a, &p1, &p2);
    printf("Valore di a: %d\nValore di p1: %d\nValore di p2: %d\n", a, *p1, **p2);
    return 0;
}
