#include <stdio.h>

int main() {
    int numero, maior, menor, lidos = 0;

    printf("Informe um numero inteiro positivo ou [use um negativo para encerrar]: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Nenhum numero foi inserido.\n");
        return 0;
    }

    maior = numero;
    menor = numero;
    lidos++;

    while (numero >= 0) {
        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }

        printf("Informe outro numero inteiro positivo ou [use negativo para encerrar]: ");
        scanf("%d", &numero);

        if (numero >= 0) {
            lidos++;
        }
    }

    printf("Foram lidos %d numeros.\n", lidos);
    printf("Maior numero lido: %d\n", maior);
    printf("Menor numero lido: %d\n", menor);

    return 0;
}