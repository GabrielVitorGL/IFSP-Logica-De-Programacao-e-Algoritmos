#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <signal.h>

int jumping = 0;
int jumpingUSeconds = 0;

// alteração da função do CTRL + C para pulo
void intHandler(int dummy) {
    jumping = 1;
}

int main() {
    const int max_spaces = 30;
    int continueGame = 1;
    int spaces = max_spaces;

    // velocidade inicial do jogo
    int timeToSleep = 150000;

    int jumped = 0;

    srand(time(NULL));


    while (continueGame == 1) {
        for (;;) { // jogo
            // limpar terminal
            printf("\033[2J");
            printf("\033[1;1H");


            fflush(stdout);

            if (spaces == -1) {
                if (jumping == 0) {
                    break; // MORREU
                }

                spaces = max_spaces;
            }

            if (jumping == 0)
                printf("\n");

            // personagem
            printf(" @");

            // lógica de pulo
            if (jumping == 1) {
                printf("\n");
                // correção da posição do cacto ao pular
                if (jumpingUSeconds == 0){
                    spaces += 2;
                }

                jumpingUSeconds += timeToSleep;


                if (jumpingUSeconds >= 1000000 - (timeToSleep * -1)) {
                    jumping = 0;
                    jumpingUSeconds = 0;
                    jumped = 1;
                }
            }

            signal(SIGINT, intHandler);

            // lógica de correção da posição do cacto ao descer do pulo
            if (jumped == 2){
                spaces -= 2;
                jumped = 0;
            }

            // lógica de distância do cacto
            for (int i = spaces; i >= 0; i--) {
                printf(" ");
            }
            spaces--;

            // exibição do cacto e do solo
            printf("#\n");
            printf("##################################### %d", timeToSleep);

            // lógica dos frames baseados na velocidade do jogo
            fflush(stdout);
            usleep(timeToSleep);

            // lógica de progressão de velocidade
            if (timeToSleep > 100000) {
                timeToSleep -= 500;
            }
            else if (timeToSleep > 80000) {
                timeToSleep -= 350;
            }
            else if (timeToSleep > 60000) {
                timeToSleep -= 200;
            }
            else if (timeToSleep > 50000) {
                timeToSleep -= 100;
            }
            else if (timeToSleep > 45000) {
                timeToSleep -= 70;
            }
            else if (timeToSleep > 40000) {
                timeToSleep -= 50;
            }

            if (jumped == 1) {
                jumped++;
            }
        }
        printf("\033[2J");
        printf("\033[1;1H");

        printf("===========================\n");
        printf("========VOCÊ MORREU========\n");
        printf("===========================\n");

        fflush(stdout);
        printf("\n0 - Não\n1- Sim\nDeseja tentar novamente? ");
        fflush(stdout);
        scanf("%d", &continueGame);
        fflush(stdout);
    }


}
