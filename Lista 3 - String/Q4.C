#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char primeiro_nome[100], nome_meio[100], ultimo_nome[100], nome_completo[100];

    printf("Informe seu primeiro nome: ");
    scanf("%s", primeiro_nome);

    printf("Informe seu nome do meio: ");
    scanf("%s", nome_meio);

    printf("Informe seu ultimo nome: ");
    scanf("%s", ultimo_nome);

    sprintf(nome_completo, "%s %s %s", primeiro_nome, nome_meio, ultimo_nome);

    puts("");
    printf("Seu nome completo:  %s\n", nome_completo);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Pressione Enter para sair...");
    getchar();
    return 0;
}