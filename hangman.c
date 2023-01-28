#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int main () {
    char words[][10]= {"Hey", "Random", "Monday", "Oui"}; //How to create a string, the number 10  is the max length of the string.
    srand(time(0));
    int randomWord = rand() % 4; 
    char *wordToGuess = words[randomWord]; //Get a random word from the word bank ("words"), chair pointer!
    int remainingTries = 10;
    char wordGuessed[] ="";

    printf("Welcome to the hangman game you have 10 tries to guess the correct word! Good Luck\n");
    do {
        printf("Please guess the word: ");
        scanf("%s", wordGuessed);
        remainingTries--;
        if (strcmp(wordGuessed, wordToGuess) != 0) 
        {
            printf("Incorrect, please try again\nYou have %i tries remaning\n", remainingTries);
        }

        if (remainingTries==0) {
            printf("Sorry, you couldn't guess the word.\n GAME OVER! :(\n");
            break;
        }
    }while (strcmp(wordGuessed, wordToGuess) != 0);

    printf("You guessed the word with %i tries remaning, Congrats!\n", remainingTries);
    
    return 0;
}