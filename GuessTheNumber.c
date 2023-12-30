//This program is a part of TechnoHacks Virtual Internship.

//Task 2 :-Number Guessing Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// This Function generates a random number between 1 and 100.
int getRandomNumber() 
{
    srand(time(NULL));
    return rand() % 100 + 1;
}

// This function validates the user input as per the specified range
int getUserGuess() 
{
    int number;
    printf("\nEnter a Number Between 1 to 100: ");
    do 
    {
        if (scanf("%d", &number) != 1 || number < 1 || number > 100) 
        {
            printf("Invalid Input. Enter a Number between 1 to 100: ");
            while (getchar() != '\n');
        }
    } 
    while (number < 1 || number > 100);
    return number;
}

// This the the main Function
int main() 
{
    int random = getRandomNumber();
    int count = 0;
    int number;
    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to Guess a Number Between 1 and 100.\n");
    do 
    {
        number = getUserGuess();
        if (number > random)
        {
            printf("Too High! Try again with a Smaller Number.\n");
        }
        else if (number < random)
        {
            printf("Too Low! Try again with a Greater Number.\n");
        }
        count++;
    } 
    while (number != random);
    printf("Congratulations! You Guessed it right!\n");
    printf("Total Attempts: %d\n", count);
    return 0;
}