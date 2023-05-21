#include <stdio.h>
#include  <stdlib.h>

int main()
{
    int A;
    int B;
    int C;
    int D;
    int diferenca;

    printf("Informe o valor inteiro de A:");
    scanf("%i", &A);

    printf("Informe o valor inteiro de B: ");
    scanf("%i", &B);

    printf("Informe o valor inteiro de C: ");
    scanf("%i", &C);

    printf("Informe o valor inteiro de D: ");
    scanf("%i", &D);

    diferenca = (A * B - C * D);
        printf("Diferenca:  %i \n", diferenca);

    system("pause");
    return 0;
}