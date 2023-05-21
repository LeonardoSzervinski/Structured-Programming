#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area_superfice, volume_esfera, raio, pi;

    pi = 3.14;

    printf("Informe o valor do raio: ");
    scanf("%lf", &raio);
    
    volume_esfera = (4.0/3) * pi * (raio * raio * raio);
    area_superfice= 4 * pi * (raio * raio);

    printf("Volume: %.2lf \n", volume_esfera);
        printf("Area: %.2lf \n", area_superfice);

    system("pause");
    return 0;
}