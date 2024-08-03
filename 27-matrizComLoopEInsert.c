#include <stdio.h>

int main() {
    int matriz[4][4];

    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            printf("Digite o valor da linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A matriz ficou: \n");
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
