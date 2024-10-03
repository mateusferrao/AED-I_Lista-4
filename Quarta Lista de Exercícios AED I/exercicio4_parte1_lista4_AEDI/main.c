#include <stdio.h>
#include <stdlib.h>

int fatorial(int num)
{
    int fatorial = 1;
    for (int i = 2; i <= num; i++)
    {
        fatorial *= i;
    }
    return fatorial;
}

float calculaValorE(int num)
{
    float E = 1.0;
    for (int i = 1; i <= num; i++)
    {
        E += 1.0 / fatorial(i);
    }
    return E;
}

int main()
{
    int num;
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &num);

    printf("E = %.2f\n",calculaValorE(num));

    return 0;
}
