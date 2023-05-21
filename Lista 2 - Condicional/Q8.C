#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float valor, preco_final;
    char estado[3];

    printf("Informe o valor do produto: ");
    scanf("%f", &valor);

    printf("Informe o estado de destino (MG, SP, RJ ou MS): ");
    scanf("%s", estado);

    if (strcmp(estado, "MG") == 0)
    {
        preco_final = valor * 1.07;
    }
    else if (strcmp(estado, "SP") == 0)
    {
        preco_final = valor * 1.12;
    }
    else if (strcmp(estado, "RJ") == 0)
    {
        preco_final = valor * 1.15;
    }
    else if (strcmp(estado, "MS") == 0)
    {
        preco_final = valor * 1.08;
    }
    else
    {
        printf("Estado invalido!\n");
        return 0;
    }

    printf("O preco final do produto no estado %s é de R$ %.2f\n", estado, preco_final);

    system("pause");
    return 0;
}
