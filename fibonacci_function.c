#include <stdio.h>

// Função recursiva para calcular o termo n da sequência de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
// Entrada do valor
    printf("Digite o valor de n: ");
    scanf("%d", &n);

// Imprime o termo n da sequência de Fibonacci
    printf("O %do termo da sequência de Fibonacci é: %d\n", n, fibonacci(n));

    return 0;
}
