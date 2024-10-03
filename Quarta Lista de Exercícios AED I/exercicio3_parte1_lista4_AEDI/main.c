#include <stdio.h>
#include <stdlib.h>

float calculaValorDeE(int n)
{
    float E = 0.0, fatorial = 1.0;

    for (int i=1;i<=n;i++)
    {
        fatorial *= i;
        E += (1.0/fatorial);
    }
    return E;
}

int main()
{
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&n);

    printf("E = %f",calculaValorDeE(n));

    return 0;
}
