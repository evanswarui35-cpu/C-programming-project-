
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(NULL));
    secret = rand() % 20 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 20.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            break;
        }
    }

    printf("You guessed correctly in %d attempts.\n", attempts);

    return 0;
}
