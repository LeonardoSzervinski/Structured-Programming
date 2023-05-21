#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char nome_vendendor[100];
    double salario_fixo;
    double total_vendas;
    double comissao;
    double total_salario;

    printf("Informe nome do vendedor: ");
    scanf(" %s", nome_vendendor);

    printf("Informe o salario fixo: ");
    scanf("%lf", &salario_fixo);

    printf("Informe o total de vendas: ");
    scanf("%lf", &total_vendas);

    comissao = total_vendas * 0.15;
    total_salario = salario_fixo + comissao;

    printf("Salario do mes R$: %.2lf \n", total_salario);
    
    system("pause");
    return 0;
}