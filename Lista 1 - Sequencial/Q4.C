#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    int B;
    int X;

    printf("Informe um valor inteiro para A: ");
    scanf("%i", &A);

    printf("Informe um valor inteiro para B: ");
    scanf("%i", &B);

    X = A + B;

    printf("%i + %i = %i \n", A, B, X);

    system("pause");
    return 0;   
}