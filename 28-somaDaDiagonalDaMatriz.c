#include <stdio.h>
#define tamanho 3

int main() {
    int matriz[tamanho][tamanho];
    int somaDiagonal;

    for (int i=0; i<tamanho; i++){
        for (int j=0; j<tamanho; j++){
            printf("Digite o valor da posicao [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A matriz ficou: \n");
    for (int i=0; i<tamanho; i++){
        for (int j=0; j<tamanho; j++){
            printf("%d ", matriz[i][j]);
            if (i == j) {
                  somaDiagonal += matriz[i][j];
            }
        }
        printf("\n");
    }

    printf("\n\nA soma dos elementos diagonais da matriz e: %d\n", somaDiagonal);

    return 0;
}
