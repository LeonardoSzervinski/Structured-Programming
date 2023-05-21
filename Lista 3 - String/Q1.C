#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[100];
    int tamanho;

    printf("Informe seu nome completo: \n");
    fgets(nome, 100, stdin);

    tamanho = strlen(nome) - 1;
    printf("O nome informado tem %d caracteres. \n", tamanho);

    system("pause");
    return 0;
}