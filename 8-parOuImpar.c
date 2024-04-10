#include <stdio.h>

int main() {
    int n;
    printf("Digite um número para descobrir se é par ou ímpar: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O número é par");
        return 0;
    }
    printf("O número é impar");

    return 0;
}
