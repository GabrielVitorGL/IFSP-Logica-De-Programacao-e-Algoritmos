#include <stdio.h>

int main() {
    char repetir = 'S';

    while (repetir == 'S' || repetir == 's') {
        printf("\033[2J"); // limpa o terminal
        printf("\033[1;1H"); // move o cursor para a posição 1;1

        somarNumeros();

        printf("Deseja somar mais uma vez? S/N: ");
        scanf(" %c", &repetir);
    }
}

void somarNumeros() {
    int n1, n2;

    printf("Soma dois números\n\n");

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("A soma é: %d\n\n", n1 + n2);
}
