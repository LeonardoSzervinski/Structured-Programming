#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso;
    char classificacao;

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    printf("Informe o seu peso: ");
    scanf("%f", &peso);

    if (altura < 1.20)
    {
        if (peso <= 60)
            classificacao = 'A';
        else if (peso <= 90)
            classificacao = 'D';
        else
            classificacao = 'G';
    }
    else if (altura <= 1.70)
    {
        if (peso <= 60)
            classificacao = 'B';
        else if (peso <= 90)
            classificacao = 'E';
        else
            classificacao = 'H';
    }
    else
    {
        if (peso <= 60)
            classificacao = 'C';
        else if (peso <= 90)
            classificacao = 'F';
        else
            classificacao = 'I';
    }

    printf("Sua classificacao e: %c\n", classificacao);

    system("pause");
    return 0;
}
