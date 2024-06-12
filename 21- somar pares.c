#include <stdio.h>

int main() {
    int n1, n2, soma;

    for (int i; n2 <= n1 || n2 - n1 > 40; i++) {
    if (i != 0)
        printf("\nN2 deve ser maior que n1 e a diferença entre n1 e n2 não pode ser maior que 40\n");
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    }

    for (int i = n1; i <= n2; i++){
        if (i % 2 == 0) {
            printf("%d\n", i);
            soma += i;
        }
    }

    printf("\nA soma dos números é: %d", soma);

    return 0;
}
