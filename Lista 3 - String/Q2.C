#include <stdio.h>
#include <string.h>

int main()
{
    char cor[20];

   printf("Informe o nome de uma cor (branco, verde ou amarelo): ");
    scanf("%s", cor);

    if(strcmp(cor, "branco") == 0) {
        printf("Cor valida\n");
    }
    else if(strcmp(cor, "verde") == 0) {
        printf("Cor valida\n");
    }
    else if(strcmp(cor, "amarelo") ==0) {
        printf("Cor valida\n");
    }
    else {
        printf("Cor invalida");
    }

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Pressione Enter para sair....");
    getchar();
    return 0;
}