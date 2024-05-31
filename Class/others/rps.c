#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define the options as constants
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

// Define the result messages as constants
#define WIN "You win!\n"
#define LOSE "You lose!\n"
#define TIE "It's a tie!\n"

// A function that returns a random number between 1 and 3
int get_random_option()
{
    return rand() % 3 + 1;
}

// A function that returns the name of the option as a string
const char* get_option_name(int option)
{
    switch (option)
    {
    case ROCK:
        return "Rock";
    case PAPER:
        return "Paper";
    case SCISSORS:
        return "Scissors";
    default:
        return "Invalid option";
    }
}

// A function that returns the result message based on the user's and computer's options
const char* get_result_message(int user_option, int computer_option)
{
    // If both options are the same, it is a tie
    if (user_option == computer_option)
    {
        return TIE;
    }

    // If the user's option is rock
    if (user_option == ROCK)
    {
        // If the computer's option is paper, the user loses
        if (computer_option == PAPER)
        {
            return LOSE;
        }
        // If the computer's option is scissors, the user wins
        else if (computer_option == SCISSORS)
        {
            return WIN;
        }
    }

    // If the user's option is paper
    if (user_option == PAPER)
    {
        // If the computer's option is scissors, the user loses
        if (computer_option == SCISSORS)
        {
            return LOSE;
        }
        // If the computer's option is rock, the user wins
        else if (computer_option == ROCK)
        {
            return WIN;
        }
    }

    // If the user's option is scissors
    if (user_option == SCISSORS)
    {
        // If the computer's option is rock, the user loses
        if (computer_option == ROCK)
        {
            return LOSE;
        }
        // If the computer's option is paper, the user wins
        else if (computer_option == PAPER)
        {
            return WIN;
        }
    }

    // Otherwise, return an invalid message
    return "Invalid result";
}

int main()
{
    int user_option; // The user's option
    int computer_option; // The computer's option

    // Initialize the random seed
    srand(time(NULL));

    // Print a welcome message
    printf("Welcome to Rock Paper Scissors!\n");

    // Print the instructions
    printf("Enter 1 for Rock, 2 for Paper, or 3 for Scissors.\n");

    // Get the user's input and validate it
    printf("Your choice: ");
    scanf("%d", &user_option);
    
    if (user_option < 1 || user_option > 3)
    {
        printf("Invalid choice. Please try again.\n");
        return 0;
    }

    // Get the computer's choice and print it
    computer_option = get_random_option();
    printf("Computer's choice: %s\n", get_option_name(computer_option));

    // Print the result message based on the user's and computer's choices
    printf(get_result_message(user_option, computer_option));

    return 0;
}
