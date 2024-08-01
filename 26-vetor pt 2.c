#include <stdio.h>
#define TAMANHO_VETOR 10

int main() {
    int vetor[TAMANHO_VETOR];

    for (int i; i < TAMANHO_VETOR; i++){
        printf("Digite um valor para a posição %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }


    printf("\nO vetor final ficou: \n");
    for (int i; i < TAMANHO_VETOR; i++) {
        printf("%d, ", vetor[i]);
    }

    return 0;
}
