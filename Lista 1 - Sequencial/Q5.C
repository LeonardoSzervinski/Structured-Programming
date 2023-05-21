#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    int B;

    printf("Informe um valor inteiro para A: ");
    scanf("%i", &A);

    printf("Informe um valor inteiro para B: ");
    scanf("%i", &B);

    printf("%i + %i = %i \n", A, B, A+B);

    system("pause");
    return 0;  
}