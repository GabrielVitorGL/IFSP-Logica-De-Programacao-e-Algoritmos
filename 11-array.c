#include <stdio.h>

int main() {
    int sair = 1;
    float nums[999];
    float media;
    int numNums;

    for (int i; ; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%f", &nums[i]);

        printf("\n1 - Sim\n");
        printf("0 - Não, calcular a média\n");

        printf("Deseja digitar mais um número? ");
        scanf("%d", &sair);

        if (sair == 0)
            break;

        printf("\n");
    }

    for (int i; i < 999; i++) {
        if (nums[i] != 0.0)
            numNums++;
        else
            break;
    }

    for (int i; i < numNums; i++) {
        media += nums[i];
        printf("%f\n", media);
    }

    media = media / numNums;

    printf("Sua média de %d números é: %.2f", numNums, media);
}
