#include <stdio.h>
#include <stdlib.h>

int verificaPrimo(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void primo(int m, int *p1, int *p2)
{
    for (int i = m - 1; i > 1; i--)
    {
        if (verificaPrimo(i))
        {
            *p1 = i;
            break;
        }
    }

    for (int i = m + 1;; i++)
    {
        if (verificaPrimo(i))
        {
            *p2 = i;
            break;
        }
    }
}

int main()
{
    int m, p1 = 0, p2 = 0;

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    primo(m, &p1, &p2);

    printf("Maior primo menor que %d: %d\n", m, p1);
    printf("Menor primo maior que %d: %d\n", m, p2);

    return 0;
}
