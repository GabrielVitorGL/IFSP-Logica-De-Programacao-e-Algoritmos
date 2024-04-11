#include <stdio.h>

int main() {
    int n;
    printf("Digite um número para descobrir seu sinal: ");
    scanf("%d", &n);

    if (n > 0)
        printf("O número é positivo");
    else if (n < 0)
        printf("O número é negativo");
    else
        printf("O número é 0");

    return 0;
}













/*
    if (n > 0) {
        printf("O número é positivo");
        return 0;
    }

    if (n < 0) {
        printf("O número é negativo");
        return 0;
    }

    printf("O número é 0");
*/
