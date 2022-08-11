#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//Take an input that outputs all prime numbers between 0 and the input. 
//At the end, it's going to tell the total number of prime numbers.

bool isPime(int input)
 {
     printf("Which number would you like to check if it is prime?\n");
     scanf("%i", &input);

        for (int i = sqrt(input); i > 1; i--)
        {
            printf("%d\n", i);
            if (input % i == 0)
            {
                return false;
            }
        }
        return true;
 }

int main()
{
	int input;
    scanf("%d", &input);

    for(int i = input; i > 1; i--)
    {
        
    }

	printf("Outputting all prime numbers...\n");

	for(int i = sqrt(input); i > 1; i--)
    {   
        bool prime = isPrime(i);
        if (isPrime)
        {
           printf("\nIsPrime\n");
        }
	
	return 0;
}
