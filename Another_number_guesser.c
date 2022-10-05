#include <stdio.h>

int main()
{
	int guesses = 0, tries_left = 5, num_to_guess = 15, num, rounds;

	printf("This is a guessing game.\n");

	printf("I have chosen a number between 0 and 20 which you must guess.\n");
	for(int guesses = 0; guesses < 5; guesses++)
	{
		printf("\n\nYou have %d tries_left", tries_left);

		printf("\nEnter a guess:");

		scanf("%d", &num);

		if(num == num_to_guess)
		{
			printf("\nWow, your got it right! The number is %d\n", num_to_guess);
			printf("YOU WON THE GUESSING GAME!\n");
			return 0;
		} else
		{
			printf("Sorry, definetely not correct\n");
			if(num > num_to_guess)
			{
				printf("Try lower!\n\n");
			} else 
			{
				printf("Try higher\n\n");
			}
			--tries_left;	
		}

	}
	return 0;

}
