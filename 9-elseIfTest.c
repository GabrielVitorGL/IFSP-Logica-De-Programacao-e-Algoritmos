#include <stdio.h>

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Com Return: \n");
    withReturn(n);
    printf("\n\nCom Else If: \n");
    withElseIf(n);

    return 0;
}

void withReturn(int n) {
    if (n < 10) {
        printf("O número é menor que 10");
        return;
    }
    if (n < 100) {
        printf("O número é menor que 100");
        return;
    }
    if (n < 1000) {
        printf("O número é menor que 1.000");
        return;
    }
    if (n < 10000) {
        printf("O número é menor que 10.000");
        return;
    }
    if (n < 100000) {
        printf("O número é menor que 100.000");
        return;
    }
    if (n < 1000000) {
        printf("O número é menor que 1.000.000");
        return;
    }
    printf("O número é maior que 1.000.000");
}

void withElseIf(int n) {
    if (n < 10)
        printf("O número é menor que 10");
    else if (n < 100)
        printf("O número é menor que 100");
    else if (n < 1000)
        printf("O número é menor que 1.000");
    else if (n < 10000)
        printf("O número é menor que 10.000");
    else if (n < 100000)
        printf("O número é menor que 100.000");
    else if (n < 1000000)
        printf("O número é menor que 1.000.000");
    else
        printf("O número é maior que 1.000.000");
}
