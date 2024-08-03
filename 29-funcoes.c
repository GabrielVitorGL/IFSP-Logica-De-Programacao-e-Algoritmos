#include <stdio.h>

int main(){
    int soma = somarNumeros(5, 3);

    printf("A soma dos numeros feitas pela funcao e: %d\n", soma);

    return 0;
}

int somarNumeros(int a, int b) {
    return a + b;
}
