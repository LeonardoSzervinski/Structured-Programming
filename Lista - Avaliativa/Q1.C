#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;
    int diferenca; 

    printf("Informe o valor inteiro de 'a': ");
    scanf("%i", &a);

    printf("Informe o valor inteiro de 'b': ");
    scanf("%i", &b);
    
    printf("Informe o valor inteiro de 'c': ");
    scanf("%i", &c);
    
    printf("Informe o valor inteiro de 'd': ");
    scanf("%i", &d);

    diferenca = a * b - c * d;

    printf("Diferenca = %i * %i - %i * %i \n", a, b, c, d);
    printf("Diferenca = %i \n", diferenca);

    return 0;
}