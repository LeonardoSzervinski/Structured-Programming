#include <stdio.h>

int main() {
    int fibonacciAnterior = 0, fibonacciAtual = 1, fibonacciEnesimo;
    int  n, i; //'n' - representa um tamanho ou quantidade │ 'i' representa controle em estruturas de repetição
    
    printf("Informe um numero inteiro que seja maior ou igual a zero: ");
    scanf("%d", &n);
    
    if (n == 0) {
        fibonacciEnesimo = 0;
    } else if (n == 1) {
        fibonacciEnesimo = 1;
    } else {
        for (i = 2; i <= n; i++) {
            fibonacciEnesimo = fibonacciAnterior + fibonacciAtual;
            fibonacciAnterior = fibonacciAtual;
            fibonacciAtual = fibonacciEnesimo;
        }
    }
    
    printf("O enesimo termo da sequencia de Fibonacci= %d", fibonacciEnesimo);
    
    return 0;
}