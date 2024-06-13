#include <stdio.h>

int main() {
    int num, soma;

    for (int i; i<10; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num < 0)
            break;

        soma += num;
    }

    printf("A soma dos números é: %d", soma);

    return 0;
}
