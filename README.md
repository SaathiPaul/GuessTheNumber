# Number Guessing Game

This simple C program implements a classic Number Guessing Game where the user needs to guess a randomly generated number between 1 and 100. The program provides feedback to the user after each guess, indicating whether the guess is too high or too low. The game continues until the user correctly guesses the random number.

## How to Play

1. The program generates a random number between 1 and 100 using the `getRandomNumber` function.
2. The user is prompted to enter a guess using the `getUserGuess` function. The input is validated to ensure it is a valid number within the specified range.
3. The program provides feedback on whether the guess is too high or too low.
4. Steps 2 and 3 are repeated until the user correctly guesses the random number.
5. Upon a correct guess, the program congratulates the user and displays the total number of attempts.

## Functions

### `getRandomNumber()`

This function initializes the random number generator using the current time and returns a random number between 1 and 100.

### `getUserGuess()`

This function prompts the user to enter a number between 1 and 100, validates the input, and ensures it falls within the specified range. It continues to prompt the user until a valid input is provided.

### `main()`

The main function initializes the game by generating a random number and then enters a loop where the user is prompted to guess the number. Feedback is provided after each guess until the correct number is guessed. The program then congratulates the user and displays the total number of attempts.
