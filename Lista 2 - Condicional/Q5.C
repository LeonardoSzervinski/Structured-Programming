#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    float numero;

    printf("Informe um numero: ");
    scanf("%f", &numero);

    if(numero > 0) {
        printf("Numero digitado ao quadrado: %.2f\n", pow(numero, 2));
        printf("Raiz quadrada do numero digitado: %.2f\n", sqrt(numero));
    }

    system("pause");
    return 0;
}
