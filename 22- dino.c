#include <stdio.h>
#include <unistd.h>

int main() {
    const int max_spaces = 10;
    int die;
    int spaces = max_spaces;

    while (die == 0) {


        printf("\033[2J ");
        printf("\033[1;1H ");


        fflush(stdout);
        //sleep(1);

        if (spaces == 0) {
            spaces = max_spaces;
        }

        for (int i = spaces; i > 0; i--) {
            printf(" ");
        }
        spaces--;

        printf("#\n");
        printf("#############");

        fflush(stdout);
        sleep(1);
    }
}
