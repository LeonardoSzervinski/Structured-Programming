#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[100], email[100], endereco[100];
    char nome_backup[100], email_backup[100], endereco_backup[100];

    printf("Informe seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; 

    printf("Informe seu e-mail: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    printf("Informe seu endereco: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';

    strcpy(nome_backup, nome);
    strcpy(email_backup, email);
    strcpy(endereco_backup, endereco);

    printf("Backup dos dados do usuario: \n");
    printf("Nome: %s\n", nome_backup);
    printf("E-mail: %s\n", email_backup);
    printf("Endereco: %s\n", endereco_backup);

    printf("Pressione Enter para sair...");
    getchar();
    return 0;
}



