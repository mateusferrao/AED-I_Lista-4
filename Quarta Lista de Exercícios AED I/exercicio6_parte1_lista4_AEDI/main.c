#include <stdio.h>
#include <stdlib.h>

char verificaLados(float X, float Y, float Z)
{
    if ((X < Y+Z) && (Y < X+Z) && (Z < X+Y))
    {
       return 'S';
    }else
    {
        return 'N';
    }

}

char identificaTriangulo(float X, float Y, float Z)
{
    if(X==Y && Z==Y)
    {
        return 'Q';
    }else if(X==Y || Z==X || Z==Y)
    {
        return 'I';
    }else
    {
        return 'E';
    }
}

int main()
{
    int numero;

    printf("Numero de triangulos: ");
    scanf("%d",&numero);

    for(int i=0; i<numero;i++){

        float X,Y,Z;

        printf("\nValor X: ");
        scanf("%d",&X);

        printf("Valor Y: ");
        scanf("%d",&Y);

        printf("Valor Z: ");
        scanf("%d",&Z);

        if (verificaLados(X,Y,Z) == 'N')
        {
            printf("Valores invalidos\n");
        }
        else
        {
            if (identificaTriangulo(X,Y,Z)=='Q')
            {
                printf("Triangulo Equilatero\n");
            }else if (identificaTriangulo(X,Y,Z)=='I')
            {
                printf("Triangulo Isosceles\n");
            }else
            {
                printf("Triangulo Escaleno\n");
            }
        }
    }

    return 0;
}
