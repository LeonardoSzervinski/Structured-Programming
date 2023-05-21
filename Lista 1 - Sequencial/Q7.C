#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    int B;
    int operacao;

    printf("Informe o valor inteiro de A: ");
    scanf("%i", &A);

    printf("Informe o valor inteiro de B: ");
    scanf("%i", &B);

    operacao = A * B;

    printf("Operacao: %i \n", operacao);

    system("pause");
    return 0;
}