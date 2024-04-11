#include <stdio.h>

int main() {
    int n1, n2, tmp;

    do {
        printf("Número 1: ");
        scanf("%d", &n1);

        printf("Número 2: ");
        scanf("%d", &n2);

        if (n1 == n2)
            printf("Os números devem ser diferentes!\n\n");
    } while (n1 == n2);

    tmp = n1;
    n1 = n2;
    n2 = tmp;

    printf("\nNovo número 1: %d\n", n1);
    printf("Novo número 2: %d", n2);

    return 0;
}
