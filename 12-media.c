#include <stdio.h>

int main() {
    float n1, n2, n3, n4;
    float media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    printf("Digite a nota 4: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;
    printf("\nA média dessas notas é: %.2f\n", media);

    if (media > 5.9)
        printf("Você foi APROVADO");
    else if (media >= 4)
        printf("EXAME");
    else
        printf("Você foi REPROVADO");

}
