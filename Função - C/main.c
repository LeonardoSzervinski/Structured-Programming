#include <stdio.h>

float celsius_para_fahrenheit(float celsius)
{
    return (9.0 * celsius / 5.0) + 32.0;
}

float fahrenheit_para_celsius(float fahrenheit)
{
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

float celsius_para_kelvin(float celsius)
{
    return celsius + 273.15;
}

float kelvin_para_celsius(float kelvin)
{
    return kelvin - 273.15;
}

float celsius_para_reaumur(float celsius)
{
    return celsius * 4.0 / 5.0;
}

float reaumur_para_celsius(float reaumur)
{
    return reaumur * 5.0 / 4.0;
}

float kelvin_para_rankine(float kelvin)
{
    return kelvin * 1.8;
}

float rankine_para_kelvin(float rankine)
{
    return rankine / 1.8;
}

int main()
{
    int opcao;
    float temperatura, resultado;

    printf("Selecione uma opcao de conversao:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("3 - Celsius para Kelvin\n");
    printf("4 - Kelvin para Celsius\n");
    printf("5 - Celsius para Reaumur\n");
    printf("6 - Reaumur para Celsius\n");
    printf("7 - Kelvin para Rankine\n");
    printf("8 - Rankine para Kelvin\n");
    printf("Informe a opcao desejada: ");
    scanf("%d", &opcao);

    printf("Informe a temperatura a ser convertida: ");
    scanf("%f", &temperatura);

    switch (opcao)
    {
    case 1:
        resultado = celsius_para_fahrenheit(temperatura);
        printf("%.2f C = %.2f F\n", temperatura, resultado);
        break;
    case 2:
        resultado = fahrenheit_para_celsius(temperatura);
        printf("%.2f F = %.2f C\n", temperatura, resultado);
        break;
    case 3:
        resultado = celsius_para_kelvin(temperatura);
        printf("%.2f C = %.2f K\n", temperatura, resultado);
        break;
    case 4:
        resultado = kelvin_para_celsius(temperatura);
        printf("%.2f K = %.2f C\n", temperatura, resultado);
        break;
    case 5:
        resultado = celsius_para_reaumur(temperatura);
        printf("%.2f C = %.2f Re\n", temperatura, resultado);
        break;
    case 6:
        resultado = reaumur_para_celsius(temperatura);
        printf("%.2f Re = %.2f C\n", temperatura, resultado);
        break;
    case 7:
        resultado = kelvin_para_rankine(temperatura);
        printf("%.2f K = %.2f R\n", temperatura, resultado);
        break;
    case 8:
        resultado = rankine_para_kelvin(temperatura);
        printf("%.2f R = %.2f K\n", temperatura, resultado);
        break;
    default:
        printf("Opcao invalida.\n");
    }

    return 0;
}