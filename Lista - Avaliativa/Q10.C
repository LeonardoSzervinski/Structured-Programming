#include <stdio.h>

int main() {
    int numeros[10], soma = 0;
    float media;

    printf("Informe 10 numeros inteiros positivos:\n");

    for(int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = (float) soma / 10;

    printf("A media dos 10 numeros inteiros: %.2f\n", media);

    return 0;
}