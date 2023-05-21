#include <stdio.h>
#include <math.h>

int main() {
    int numero, imprima;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &numero);
    
    printf("Os divisores do numero %d sao: ", numero);
    for (imprima = 1; imprima <= sqrt(numero); imprima++) {
        if (numero % imprima == 0) {
            printf("%d ", imprima);
            if (imprima != sqrt(numero)) {
                printf("%d ", numero / imprima);
            }
        }
    }
    
    return 0;
}