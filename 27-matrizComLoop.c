#include <stdio.h>

int main() {
    int matriz[5][5];

    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            matriz[i][j] = (i * 5) + j;
        }
    }

    printf("A matriz ficou: \n");
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
