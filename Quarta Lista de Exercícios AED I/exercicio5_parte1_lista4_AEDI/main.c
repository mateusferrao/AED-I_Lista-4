#include <stdio.h>
#include <stdlib.h>

float retornaValorS(int n)
{
    float S=0;

    for (int i=1;i<=n;i++)
    {
        S+=(((i*i)+1.0)/(i+3.0));
    }

    return S;
}

int main()
{
    float n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%f",&n);

    printf("S = %f",retornaValorS(n));

    return 0;
}
