#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_int;
    float numero_float;
    double numero_double;
    char letra;
    char texto[50];
    void *endereco;


    printf("Informe um numero inteiro: ");
    scanf("%i", &numero_int);

    printf("Informe um numero real float: ");
    scanf("%f", &numero_float);

    printf("Informe um numero real double: ");
    scanf("%lf", &numero_double);

    printf("Informe uma letra: ");
    scanf(" %c", &letra);

    printf("Informe um texto: ");
    scanf("%s", texto);

    printf("Informe um endereco de memoria hexadecimal: ");
    scanf("%p", &endereco);

    printf("Numero Inteiro: \"%i\n", numero_int);

    printf("Numeros reais: \n");
        printf("Float: \"%.3f\"\n", numero_float);
        printf("Double: \"%.lf\"\n", numero_double);
        
    printf("Letra: \"%c\"\n", letra);
    printf("Texto: \"%s\"\n", texto);
    printf("Endereco: \"%p\"\n", endereco);

    system("pause");
    return 0;
}