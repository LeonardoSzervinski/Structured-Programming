#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;

    printf("Informe um numero inteiro positivo: ");
    scanf("%i", &x);

    for (y = 0; y <= x; y++) {
        printf("%d\n", y);
    }

    system("pause");
    return 0;
}