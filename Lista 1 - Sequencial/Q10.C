#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2, distancia_p1p2;

    printf("Informe os valores de P1 (X1,Y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Informe os valores de P2 (X2,Y2): ");
    scanf("%lf %lf", &x2, &y2);

    distancia_p1p2 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        printf("Distancia de P1 e P2: %.4lf \n", distancia_p1p2);

        system("pause");
        return 0;
}