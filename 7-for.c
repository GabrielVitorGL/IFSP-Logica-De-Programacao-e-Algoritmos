#include <stdio.h>

int main(){
    char fruta[7] = "banana";

    int cont, k;

    printf("Contador\n\n");
    for (k=0;k<sizeof(fruta);k++){
        if (fruta[k] == 'a')
            cont++;
    }

    printf("Letras 'a': %d", cont);

    return 0;
}
