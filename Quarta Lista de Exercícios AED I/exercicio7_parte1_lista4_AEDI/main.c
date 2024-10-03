#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Numero 1: ");
    scanf("%d", &a);

    printf("Numero 2: ");
    scanf("%d", &b);

    if (&a > &b)
    {
        printf("Maior endereco eh o do numero 1: %p\n",&a);
    }
    else
    {
        printf("Maior endereco eh o do numero 2: %p\n",&b);
    }

    return 0;
}
