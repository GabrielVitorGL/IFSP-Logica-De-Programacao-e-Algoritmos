#include <stdio.h>

int main() {
    int n;
    printf("Digite um número para descobrir se é par ou ímpar: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O número %d é par", n);
        return 0;
    }
    printf("O número %d é impar", n);

    return 0;
}
