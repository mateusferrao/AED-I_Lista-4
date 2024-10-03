#include <stdio.h>
#include <stdlib.h>

float calculaNotas(float nota1, float nota2, float nota3, char letra)
{
    switch (letra)
    {
    case 'A':
        printf("Media aritmetica: %f",(nota1 + nota2 + nota3)/3);
        break;
    case 'P':
        printf("Media ponderada: %f",((nota1*5) + (nota2*3) + (nota3*2))/10);
        break;
    default:
        printf("Opção inválida");
        break;
    }
}

int main()
{
    float nota1, nota2, nota3;
    char letra;

    printf("Nota 1: ");
    scanf("%f",&nota1);

    printf("Nota 2: ");
    scanf("%f",&nota2);

    printf("Nota 3: ");
    scanf("%f",&nota3);

    fflush(stdin);

    printf("Operacao (A = media ponderada; P = media ponderada): ");
    scanf("%c",&letra);

    calculaNotas(nota1, nota2, nota3, letra);

    return 0;
}
