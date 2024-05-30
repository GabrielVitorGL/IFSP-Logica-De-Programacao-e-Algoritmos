#include <stdio.h>

int main() {
    int soma;

    for (int i=2; i < 21; i += 2){
        printf("%d\n", i);
        soma += i;
    }

    printf("\nA soma dos números é: %d", soma);

    return 0;
}
