#include <stdio.h>

enum Quadrante {origem, eixo_x, eixo_y, q1, q2, q3, q4};

int main() {
    double x, y;
    enum Quadrante quad;

    printf("Informe as coordenadas (x e y) do ponto: ");
    scanf("%lf %lf", &x, &y);

    if (x == 0 && y == 0) {
        quad = origem;
    } else if (x == 0) {
        quad = eixo_y;
    } else if (y == 0) {
        quad = eixo_x;
    } else if (x > 0 && y > 0) {
        quad = q1;
    } else if (x < 0 && y > 0) {
        quad = q2;
    } else if (x < 0 && y < 0) {
        quad = q3;
    } else {
        quad = q4;
    }

    switch (quad) {
        case origem:
            printf("Origem\n");
            break;
        case eixo_x:
            printf("Eixo X\n");
            break;
        case eixo_y:
            printf("Eixo Y\n");
            break;
        case q1:
            printf("Q1\n");
            break;
        case q2:
            printf("Q2\n");
            break;
        case q3:
            printf("Q3\n");
            break;
        case q4:
            printf("Q4\n");
            break;
    }

    return 0;
}