#include <stdio.h>

int main() {
    int itens, quantidade;
    float total = 0, maior = 0, menor = 0;

    int primeira_fruta = 1;

    do {
        printf("Escolha uma opcao de fruta:\n");
        printf("1 - ABACAXI: R$5,00\n");
        printf("2 - MACA: R$1,00\n");
        printf("3 - PERA: R$4,00\n");
        printf("Digite 0 para enc33errar a compra.\n");
        scanf("%d", &itens);

        if (itens == 0) {
            break;
        }

        printf("Informe a quantidade de frutas: ");
        scanf("%d", &quantidade);

        float preco_unitario = 0;

        switch(itens) {
            case 1:
                preco_unitario = 5.0;
                break;
            case 2:
                preco_unitario = 1.0;
                break;
            case 3:
                preco_unitario = 4.0;
                break;
            default:
                printf("Opcao invalida.\n");
                continue;
        }

        float preco_total = quantidade * preco_unitario;
        total += preco_total;

        if (primeira_fruta) {
            maior = menor = preco_total;
            primeira_fruta = 0;
        } else {
            if (preco_total > maior) {
                maior = preco_total;
            }
            if (preco_total < menor) {
                menor = preco_total;
            }
        }

    } while (itens != 0);

    if (total > 0) {
        printf("O total da compra foi de %.2f reais.\n", total);
        printf("O maior valor foi de %.2f reais e o menor valor foi de %.2f reais.\n", maior, menor);
    } else {
        printf("Nenhum item foi comprado.\n");
    }

    return 0;
}