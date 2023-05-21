#include <stdio.h>

const double PI = 3.14;

int main() {
    double raio, area, volume;

    printf("Informe o raio da esfera: ");
    scanf("%lf", &raio);

    area = 4 * PI * raio * raio;
    volume = (4.0 / 3) * PI * raio * raio * raio;

    printf("Area da superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}