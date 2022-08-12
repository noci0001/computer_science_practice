#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    char guessWords[][16] = {
        "green",
        "yellow",
        "purple",
        "windows",
        "linux",
        "apple"};

    int randomIndex = rand() % 6;

    int numLives = 5;
    int numCorrect = 0;
    int oldCorrect = 0;

    int lengthOfWord = strlen(guessWords[randomIndex]);

    //                       0 1 2 3 4 5
    //                       p u r p l e
    int letterGuessed[8] = {0, 0, 0, 0, 0, 0, 0, 0};

    int quit = 0;

    int loopIndex = 0;

    char guess[16]; // where you store the letters you are guessing

    char letterEntered;
    
    // debugger
    
    printf("guessWords: %s randomIndex: %d lengthOfWord: %d\n",
           guessWords[randomIndex],
           randomIndex,
           lengthOfWord);
    
    // game loop

    while (numCorrect < lengthOfWord) // if word is 7 letter and we guessed only 3, the game continues
    {
        printf("\n\n New Turn.... \nHangman Word:");
        
        for (loopIndex = 0; loopIndex < lengthOfWord; loopIndex++)
        {
            if (letterGuessed[loopIndex] == 1) // to ignore already typed letter
            {
                printf("%c", guessWords[randomIndex][loopIndex]);
            } 
            else {
                printf("-");
            }


        }

        printf("\nNumber correct so far: %d\n", numCorrect);
        printf("\nEnter a guess letter:");
        fgets(guess, 16, stdin); // method to register the keystroke of the letter you want to guess

        if (strncmp(guess, "quit", 4) == 0) // checking of the input "quit" in order to break the while loop and exit the game
        {
            quit = 1;
            break;
        }

        letterEntered = guess[0]; // get first letter entered

        scanf("letterEntered: %c\n", &letterEntered);

        oldCorrect = numCorrect;

        for (loopIndex = 0; loopIndex < lengthOfWord; loopIndex++)
        {
            if (letterGuessed[loopIndex] == 1) // to ignore already typed letter
            {
                printf("\nYou already typed this letter\n");
                continue;
            }
            if (letterEntered == guessWords[randomIndex][loopIndex])
            {
                letterGuessed[loopIndex] = 1;
                numCorrect++;
            }
        }

        if( oldCorrect == numCorrect )
        {
            numLives--;
            printf("Sorry, wrong guess\n");
            if(numLives == 0)
            {
                break;
            }
        } else
        {
            printf("Correct guess :)\n");
        }
        
    }

    if (quit == 1)
    {
        printf("\nThe user quit early\n");
    } else if ( numLives == 0)
    {
        printf("Sorry you lose, the word was %s", 
        guessWords[randomIndex]);
    } else {
        printf("Majestic! You guessed the word ' %s '. You won! \n", 
        guessWords[randomIndex]);
    }
    return 0;
}
