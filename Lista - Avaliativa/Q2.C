#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia;
    
    printf("Informe as cordenadas (x, y) do ponto P1: ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Digite as coordenadas (x e y) do ponto P2: ");
    scanf("%lf %lf", &x2, &y2);
    
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    
    printf("A distancia entre o ponto P1 (%.1lf, %.1lf) e P2(%.1lf, %.1lf)= %.4lf\n", x1, y1, x2, y2, distancia);

    return 0;
}