#include <stdio.h>
#include <stdlib.h>

void calcularMediaSalario() {
    int membros, totalFamilias = 0;
    float salario, somaSalarios = 0;

    while (1) {
        printf("Salario (0 para encerrar): ");
        scanf("%f", &salario);

        if (salario == 0) {
            break;
        }

        printf("Membros da familia: ");
        scanf("%d", &membros);

        somaSalarios += salario;
        totalFamilias++;
    }

    if (totalFamilias > 0) {
        float media = somaSalarios / totalFamilias;
        printf("A media de salario da populacao e: %f\n", media);
    } else {
        printf("Nenhuma familia foi inserida.\n");
    }
}

int main() {
    calcularMediaSalario();
    return 0;
}

