// Nome: Leonardo Olivieri Szervinski
// Prof(a): Joyce Siqueira
// Turno: Noturno
// Universidade Católica de Brasília
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_USERS 1000
#define MAX_NAME_LENGTH 100
#define MAX_EMAIL_LENGTH 50
#define MAX_GENDER_LENGTH 20
#define MAX_ADDRESS_LENGTH 100

int ids[MAX_USERS];
char nomesCompletos[MAX_USERS][MAX_NAME_LENGTH];
char emails[MAX_USERS][MAX_EMAIL_LENGTH];
char generos[MAX_USERS][MAX_GENDER_LENGTH];
char enderecos[MAX_USERS][MAX_ADDRESS_LENGTH];
double alturas[MAX_USERS];
int vacinas[MAX_USERS];

int numUsuarios = 0;

int gerarIdAleatorio() {
    return rand();
}

int validarEmail(const char* email) {
    int i;
    int temArroba = 0;
    int tamanho = strlen(email);

    for (i = 0; i < tamanho; i++) {
        if (email[i] == '@') {
            temArroba = 1;
            break;
        }
    }

    return temArroba;
}

int validarSexo(const char* sexo) {
    if (strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "Indiferente") == 0) {
        return 1;
    }
    return 0;
}

int validarAltura(double altura) {
    if (altura >= 1.0 && altura <= 2.0) {
        return 1;
    }
    return 0;
}

int validarVacina(int vacina) {
    if (vacina == 0 || vacina == 1) {
        return 1;
    }
    return 0;
}

void adicionarUsuario() {
    if (numUsuarios >= MAX_USERS) {
        printf("Limite maximo de usuarios atingido.\n");
        return;
    }

    int id = gerarIdAleatorio();
    ids[numUsuarios] = id;

    printf("Digite o nome completo do usuario: ");
    scanf(" %[^\n]", nomesCompletos[numUsuarios]);

    // Validação do campo de email
    do {
        printf("Digite o email do usuario: ");
        scanf("%s", emails[numUsuarios]);

        if (!validarEmail(emails[numUsuarios])) {
            printf("Email invalido. Por favor, digite um email valido.\n");
        }
    } while (!validarEmail(emails[numUsuarios]));

    // Validação do campo de sexo
    do {
        printf("Digite o genero do usuario (Feminino, Masculino ou Indiferente): ");
        scanf("%s", generos[numUsuarios]);

        if (!validarSexo(generos[numUsuarios])) {
            printf("Genero invalido. Por favor, digite um genero valido.\n");
        }
    } while (!validarSexo(generos[numUsuarios]));

    printf("Digite o endereco do usuario: ");
    scanf(" %[^\n]", enderecos[numUsuarios]);

    // Validação do campo de altura
    do {
        printf("Digite a altura do usuario (entre 1.0 e 2.0): ");
        scanf("%lf", &alturas[numUsuarios]);

        if (!validarAltura(alturas[numUsuarios])) {
            printf("Altura invalida. Por favor, digite uma altura valida.\n");
        }
    } while (!validarAltura(alturas[numUsuarios]));

    // Validação do campo de vacina
    do {
        printf("Digite 1 para indicar que o usuario ja foi vacinado, ou 0 caso contrario: ");
        scanf("%d", &vacinas[numUsuarios]);

        if (!validarVacina(vacinas[numUsuarios])) {
            printf("Valor de vacina invalido. Por favor, digite 1 (Sim) ou 0 (Nao).\n");
        }
    } while (!validarVacina(vacinas[numUsuarios]));

    numUsuarios++;

    printf("Usuario adicionado com sucesso.\n");
}

void editarUsuario() {
    int id, i;

    printf("Digite o ID do usuario que deseja editar: ");
    scanf("%d", &id);

    for (i = 0; i < numUsuarios; i++) {
        if (ids[i] == id) {
            printf("Digite o novo nome completo do usuario: ");
            scanf(" %[^\n]", nomesCompletos[i]);

            printf("Digite o novo email do usuario: ");
            scanf("%s", emails[i]);

            printf("Digite o novo genero do usuario: ");
            scanf("%s", generos[i]);

            printf("Digite o novo endereco do usuario: ");
            scanf(" %[^\n]", enderecos[i]);

            printf("Digite a nova altura do usuario: ");
            scanf("%lf", &alturas[i]);

            printf("Digite 1 para indicar que o usuario ja foi vacinado, ou 0 caso contrario: ");
            scanf("%d", &vacinas[i]);

            printf("Usuario editado com sucesso.\n");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

void excluirUsuario() {
     int id, i, j;

    printf("Digite o ID do usuario que deseja excluir: ");
    scanf("%d", &id);

    for (i = 0; i < numUsuarios; i++) {
        if (ids[i] == id) {
            for (j = i; j < numUsuarios - 1; j++) {
                ids[j] = ids[j + 1];
                strcpy(nomesCompletos[j], nomesCompletos[j + 1]);
                strcpy(emails[j], emails[j + 1]);
                strcpy(generos[j], generos[j + 1]);
                strcpy(enderecos[j], enderecos[j + 1]);
                alturas[j] = alturas[j + 1];
                vacinas[j] = vacinas[j + 1];
            }

            numUsuarios--;

            printf("Usuario excluido com sucesso.\n");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

void buscarUsuarioPorEmail() {
    char email[MAX_EMAIL_LENGTH];
    int i;

    printf("Digite o email do usuario que deseja buscar: ");
    scanf("%s", email);

    for (i = 0; i < numUsuarios; i++) {
        if (strcmp(emails[i], email) == 0) {
            printf("ID: %d\n", ids[i]);
            printf("Nome completo: %s\n", nomesCompletos[i]);
            printf("Email: %s\n", emails[i]);
            printf("Genero: %s\n", generos[i]);
            printf("Endereco: %s\n", enderecos[i]);
            printf("Altura: %.2lf\n", alturas[i]);
            printf("Vacinado: %s\n", vacinas[i] == 1 ? "Sim" : "Nao");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

void imprimirTodosUsuarios() {
    int i;

    if (numUsuarios == 0) {
        printf("Nenhum usuario cadastrado.\n");
        return;
    }

    printf("Lista de usuarios cadastrados:\n");

    for (i = 0; i < numUsuarios; i++) {
        printf("Usuario %d:\n", i + 1);
        printf("ID: %d\n", ids[i]);
        printf("Nome completo: %s\n", nomesCompletos[i]);
        printf("Email: %s\n", emails[i]);
        printf("Genero: %s\n", generos[i]);
        printf("Endereco: %s\n", enderecos[i]);
        printf("Altura: %.2lf\n", alturas[i]);
        printf("Vacinado: %s\n", vacinas[i] == 1 ? "Sim" : "Nao");
        printf("----------------------\n");
    }
}

void fazerBackupUsuarios(int idsBackup[], char nomesBackup[][MAX_NAME_LENGTH], char emailsBackup[][MAX_EMAIL_LENGTH], char generosBackup[][MAX_GENDER_LENGTH],
                         char enderecosBackup[][MAX_ADDRESS_LENGTH], double alturasBackup[], int vacinasBackup[], int* numUsuariosBackup) {
    if (numUsuarios == 0) {
        printf("Nenhum usuario cadastrado para fazer backup.\n");
        return;
    }

    int i;

    *numUsuariosBackup = numUsuarios;

    for (i = 0; i < numUsuarios; i++) {
        idsBackup[i] = ids[i];
        strcpy(nomesBackup[i], nomesCompletos[i]);
        strcpy(emailsBackup[i], emails[i]);
        strcpy(generosBackup[i], generos[i]);
        strcpy(enderecosBackup[i], enderecos[i]);
        alturasBackup[i] = alturas[i];
        vacinasBackup[i] = vacinas[i];
    }

    printf("Backup realizado com sucesso.\n");
}

void restaurarDados(int idsBackup[], char nomesBackup[][MAX_NAME_LENGTH], char emailsBackup[][MAX_EMAIL_LENGTH], char generosBackup[][MAX_GENDER_LENGTH],
                    char enderecosBackup[][MAX_ADDRESS_LENGTH], double alturasBackup[], int vacinasBackup[], int* numUsuariosBackup) {
    if (*numUsuariosBackup == 0) {
        printf("Nenhum backup disponivel.\n");
        return;
    }

    int i;

    numUsuarios = *numUsuariosBackup;



    for (i = 0; i < numUsuarios; i++) {
        ids[i] = idsBackup[i];
        strcpy(nomesCompletos[i], nomesBackup[i]);
        strcpy(emails[i], emailsBackup[i]);
        strcpy(generos[i], generosBackup[i]);
        strcpy(enderecos[i], enderecosBackup[i]);
        alturas[i] = alturasBackup[i];
        vacinas[i] = vacinasBackup[i];
    }

    printf("Dados restaurados com sucesso.\n");
}

int main() {
    int opcao;
    int idsBackup[MAX_USERS];
    char nomesBackup[MAX_USERS][MAX_NAME_LENGTH];
    char emailsBackup[MAX_USERS][MAX_EMAIL_LENGTH];
    char generosBackup[MAX_USERS][MAX_GENDER_LENGTH];
    char enderecosBackup[MAX_USERS][MAX_ADDRESS_LENGTH];
    double alturasBackup[MAX_USERS];
    int vacinasBackup[MAX_USERS];
    int numUsuariosBackup = 0;

    srand(time(NULL));

    do {
        printf("MENU:\n");
        printf("1. Adicionar usuario\n");
        printf("2. Editar usuario\n");
        printf("3. Excluir usuario\n");
        printf("4. Buscar usuario pelo email\n");
        printf("5. Imprimir todos os usuarios cadastrados\n");
        printf("6. Fazer backup dos usuarios cadastrados\n");
        printf("7. Restaurar dados\n");
        printf("0. Sair\n");
        printf("-------------------\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarUsuario();
                break;
            case 2:
                editarUsuario();
                break;
            case 3:
                excluirUsuario();
                break;
            case 4:
                buscarUsuarioPorEmail();
                break;
            case 5:
                imprimirTodosUsuarios();
                break;
            case 6:
                fazerBackupUsuarios(idsBackup, nomesBackup, emailsBackup, generosBackup, enderecosBackup, alturasBackup, vacinasBackup, &numUsuariosBackup);
                break;
            case 7:
                restaurarDados(idsBackup, nomesBackup, emailsBackup, generosBackup, enderecosBackup, alturasBackup, vacinasBackup, &numUsuariosBackup);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
        printf("\n");
    } while (opcao != 0);

    return 0;
}// @c - Leonardo Olivieri Szervinski 