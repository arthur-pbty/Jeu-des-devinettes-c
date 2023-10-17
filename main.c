#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int min = 1;
    int max = 100;
    int secretNumber = (rand() % (max - min + 1)) + min;
    int maxAttempts = 7;
    int attempts = 0;
    int guess;

    printf("Bienvenue dans le jeu de devinette de nombres!\n");
    printf("Je pense à un nombre entre %d et %d. Vous avez %d tentatives pour deviner.\n", min, max, maxAttempts);

    while (attempts < maxAttempts) {
        printf("Tentative %d : Entrez un nombre : ", attempts + 1);
        scanf("%d", &guess);

        if (guess == secretNumber) {
            printf("Bravo, vous avez deviné le nombre %d en %d tentatives!\n", secretNumber, attempts + 1);
            break;
        } else if (guess < secretNumber) {
            printf("Trop bas. Essayez à nouveau.\n");
        } else {
            printf("Trop haut. Essayez à nouveau.\n");
        }

        attempts++;
    }

    if (attempts >= maxAttempts) {
        printf("Vous avez atteint le nombre maximal de tentatives. Le nombre était %d.\n", secretNumber);
    }

    return 0;
}
