#include <stdio.h>
#include <stdbool.h>

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

    bool prime = isPrime(25);

    if (prime)
    {
        printf("\nIs Prime!\n");
    }
    else
    {
        printf("\nNot Prime!\n");
    }
    return 0;
}
