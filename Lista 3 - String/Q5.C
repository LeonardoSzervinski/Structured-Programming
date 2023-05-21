#include <stdio.h>
#include <string.h>

int main()
{
    char nome[100], sobrenome[100], cpf[12], senha[15];

    printf("Informe seu nome: ");
    scanf("%s", nome);

    printf("Informe seu sobrenome: ");
    scanf("%s", sobrenome);

    printf("Informe seu CPF: ");
    scanf("%s", cpf);

    sprintf(senha, "%s%c%s", nome, sobrenome[0], cpf);

    printf("Senha gerada e: %s\n", senha);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Pressione Enter para sair...");
    getchar();    
    return 0;
}