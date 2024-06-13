#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <signal.h>

int jumping = 0;
int jumpingUSeconds = 0;

void intHandler(int dummy) {
    jumping = 1;
}

int main() {
    const int max_spaces = 30;
    int die;
    int spaces = max_spaces;
    int loops = 0;
    int timeToSleep = 400000;

    srand(time(NULL));


    while (die == 0) {


        printf("\033[2J ");
        printf("\033[1;1H ");


        fflush(stdout);

        if (spaces == -1) {
            spaces = max_spaces;
        }


        if (jumping == 0)
            printf("\n ");

        printf(" @");
        if (jumping == 1) {
            printf("\n");
            if (jumpingUSeconds == 0)
                spaces += 3;

            jumpingUSeconds += timeToSleep;


            if (jumpingUSeconds >= 3000000) {
                jumping = 0;
                jumpingUSeconds = 0;
                spaces -= 1;
            }
        }

        signal(SIGINT, intHandler);

        for (int i = spaces; i >= 0; i--) {
            printf(" ");
        }
        spaces--;

        printf("#\n");
        printf("##################################### %d", timeToSleep);

        fflush(stdout);
        usleep(timeToSleep);
        if (timeToSleep > 100000) {
            timeToSleep -= 500;
        }
    }

    printf("\033[2J ");
    printf("\033[1;1H ");

    printf("===========================\n");
    printf("========VOCÊ MORREU========\n");
    printf("===========================\n");
}
