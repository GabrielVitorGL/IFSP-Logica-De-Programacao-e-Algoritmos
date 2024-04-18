#include <stdio.h>

int main() {
    float nums[99];
    float media;
    int numNums;

    printf("Digite -1 para parar de digitar e calcular!\n\n");
    for (int i; i < 99; i++) {
        float num;
        printf("Digite o %dº número: ", i+1);
        scanf("%f", &num);

        if (num == -1.0) {
            break;
        }

        nums[i] = num;
    }

    for (int i; i < 99; i++) {
        if (nums[i] != 0.0)
            numNums++;
        else
            break;
    }

    for (int i; i < numNums; i++) {
        //printf("%.2f + %.2f = ", media, nums[i]);
        media += nums[i];
        //printf("%.2f\n", media);
    }

    media = media / numNums;

    printf("Sua média de %d números é: %.2f", numNums, media);
}
