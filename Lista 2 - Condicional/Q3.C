#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%i", &numero);

    if(numero % 2 == 0) {
        printf("%i e um numero par\n", numero);
    }   else {
        printf("%i e um numero impar\n", numero);
    }

    system("pause");
    return 0;
}