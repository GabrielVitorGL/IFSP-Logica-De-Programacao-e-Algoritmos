#include <stdio.h>

void swap(int* n1, int* n2) {
    int tmp = *n1;

    *n1 = *n2;
    *n2 = tmp;
}

int main() {
    int n1, n2;

    do {
        printf("Número 1: ");
        scanf("%d", &n1);

        printf("Número 2: ");
        scanf("%d", &n2);

        if (n1 == n2)
            printf("Os números devem ser diferentes!\n\n");

    } while (n1 == n2);

    swap(&n1, &n2);

    printf("\nNúmero 1: %d\n", n1);
    printf("Número 2: %d", n2);

    return 0;
}
