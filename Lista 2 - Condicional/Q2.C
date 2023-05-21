#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;

    printf("Informe o  primeiro numero: ");
    scanf("%i", &numero1);

    printf("Informe o segundo numero: ");
    scanf("%i", &numero2);

    if(numero1 > numero2) {
        printf("O maior numero e: %i\n",  numero1);
    }   else if(numero2 > numero1) {
        printf("O maior numero e: %i\n", numero2);
    }   else {
        printf("Numeros iguais\n");
    }

    system("pause");
    return 0;
}
