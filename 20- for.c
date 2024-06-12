#include <stdio.h>

int main() {
    int loop = 999999;

    for (int i; i <= loop; i++){
        printf("%d\t", i);
        printf("faltam %d\n", loop-i);
    }

    return 0;
}
