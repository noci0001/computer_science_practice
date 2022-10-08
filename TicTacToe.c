#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define EXS X
#define NOUGHTS O


char nums[9] = {'1','2','3','4','5','6','7','8','9'};
	
int player1 = 1;
int player2 = 2;

void renderTable (int num, char letter);


int main()
{
	int i;

	printf("\t\tTic Tac Toe\t\t");
	printf("\nPlayer 1 (X) - Player 2 (O)\n");


	printf("    |     |     \n");
	printf("  %c |  %c  |  %c \n", nums[0], nums[1], nums[2]);
        printf("  __|_____|___  \n");
        printf("    |     |     \n");
        printf("  %c |  %c  |  %c \n", nums[3], nums[4], nums[5]);
        printf("  __|_____|___  \n");
        printf("    |     |     \n");
        printf("  %c |  %c  |  %c \n", nums[6], nums[7], nums[8]);
	printf("    |     |     \n");

	for (int i=0; i < 9; i++)
	{
		int choice;

		printf("Player 1, pick a number from 1 to 9\n");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1:
				renderTable(1, 'X');
				break;
			case 2:
				renderTable(2, 'X');
				break;
			case 3:
				renderTable(3, 'X');
				break;
			case 4:
				renderTable(4, 'X');
				break;
			case 5:
				renderTable(5, 'X');
				break;
			case 6:
				renderTable(6, 'X');
				break;
			case 7:
				renderTable(7, 'X');
				break;
			case 8:
				renderTable(8, 'X');
				break;
			case 9:
				renderTable(9, 'X');
				break;
			default:
				printf("Exiting...\n");
				return 0;
		}

		if(nums[0] == 'X' && nums[1] == 'X' && nums[2] == 'X')
		{
			printf("Player 1 has won!\n");
			return 0;
		} else
			printf("Next move to player 2!\n");
		
		printf("Player 2, pick a number from 1 to 9\n");
                scanf("%d", &choice);


		i++;

		   switch (choice)
                {
                        case 1:
                                renderTable(1, 'O');
                                break;
                        case 2:
                                renderTable(2, 'O');
                                break;
                        case 3:
                                renderTable(3, 'O');
                                break;
                        case 4:
                                renderTable(4, 'O');
                                break;
                        case 5:
                                renderTable(5, 'O');
                                break;
                        case 6:
                                renderTable(6, 'O');
                                break;
                        case 7:
                                renderTable(7, 'O');
                                break;
                        case 8:
                                renderTable(8, 'O');
                                break;
                        case 9:
                                renderTable(9, 'O');
                                break;
                        default:
                                printf("Exiting...\n");
                                return 0;
                }
		   if(nums[0 ] == 'O' && nums[1] == 'O' && nums[2] == 'O')
                {
                        printf("Player 2 has won!\n");
                        return 0;
                } else
			printf("Next move to Player 1!\n");
	

	}
	

}



void renderTable(int num, char letter)
{
	nums[num - 1] = letter;
	

	printf("    |     |     \n");
        printf("  %c |  %c  |  %c \n", nums[0], nums[1], nums[2]);
        printf("  __|_____|___  \n");
        printf("    |     |     \n");
        printf("  %c |  %c  |  %c \n", nums[3], nums[4], nums[5]);
        printf("  __|_____|___  \n");
        printf("    |     |     \n");
        printf("  %c |  %c  |  %c \n", nums[6], nums[7], nums[8]);
        printf("    |     |     \n");
}
