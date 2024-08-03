#include <stdio.h>
#define TAMANHO 3

int main() {
    int matriz[TAMANHO][TAMANHO];
    int somaDiagonal;

    for (int i = 0; i < TAMANHO; i++){
        for (int j = 0; j < TAMANHO; j++){
            printf("Digite o valor da posicao [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A matriz ficou: \n");
    for (int i = 0; i < TAMANHO; i++){
        for (int j = 0; j < TAMANHO; j++){
            printf("%d ", matriz[i][j]);
            if (i == j)
                somaDiagonal += matriz[i][j];
        }
        printf("\n");
    }

    printf("\n\nA soma dos elementos diagonais da matriz e: %d\n", somaDiagonal);

    return 0;
}
