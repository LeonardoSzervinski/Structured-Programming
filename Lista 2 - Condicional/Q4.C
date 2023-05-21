#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_trabalhador, pretacao_emprestimo;

    printf("Informe o salario do trabalhador: ");
    scanf("%f", &salario_trabalhador);

    printf("Informe o valor da prestacao do emprestimo: ");
    scanf("%f", &pretacao_emprestimo);

    if(pretacao_emprestimo > 0.2 * salario_trabalhador) {
        printf("Emprestimo nao concedido\n");
    }   else {
        printf("Emprestimo concedido\n");
    }

    system("pause");
    return 0;
}