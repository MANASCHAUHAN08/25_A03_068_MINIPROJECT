#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;
    int min = 1, max = 100;
    
    // Seed random number generator
    srand(time(NULL));
    secret = rand() % 100 + 1;  // Random number between 1-100
    
    printf("=== Number Guessing Game ===\n");
    printf("I'm thinking of a number between 1 and 100.\n");
    printf("Can you guess it?\n\n");
    
    // Game loop
    while (1) {
        printf("Enter your guess: ");
        
        // Check if input is valid
        if (scanf("%d", &guess) != 1) {
            printf("Please enter a valid number!\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }
        
        attempts++;
        
        if (guess < min || guess > max) {
            printf("Please guess between %d and %d!\n\n", min, max);
            continue;
        }
        
        if (guess < secret) {
            printf("Too low! Try again.\n\n");
        } else if (guess > secret) {
            printf("Too high! Try again.\n\n");
        } else {
            printf("\n🎉 Congratulations! You guessed it!\n");
            printf("The number was %d.\n", secret);
            printf("It took you %d attempts.\n", attempts);
            break;
        }
    }
    
    return 0;
}