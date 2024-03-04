// Writing a C program that Guess the Number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_GUESSES 5
#define MAX_NUMBER 20

int main() {
    int randomNumber, guess, numberOfGuesses;
    time_t t;

    // Initialize random number generator seed
    srand((unsigned) time(&t));

    // Generate a random number between 0 and 20
    randomNumber = rand() % (MAX_NUMBER + 1);

    printf("\nWelcome to the guessing game!");
    printf("\nI have chosen a number between 0 and %d, which you must guess.\n", MAX_NUMBER);

    for (numberOfGuesses = MAX_GUESSES; numberOfGuesses > 0; --numberOfGuesses) {
        printf("\nYou have %d tr%s left.", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies");
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        if (guess == randomNumber) {
            printf("\nCongratulations! You guessed it!\n");
            return 0;
        } else if (guess < 0 || guess > MAX_NUMBER) {
            printf("I said the number is between 0 and %d.\n", MAX_NUMBER);
        } else {
            printf("Sorry, %d is wrong. My number is %s than that.\n", guess,
                   (randomNumber > guess) ? "greater" : "less");
        }
    }

    printf("\nYou have had five tries and failed. The number was %d.\n", randomNumber);

    return 0;
}
