#include <stdio.h>

void changeNumber(int *pToNumOne, int *pToNumTwo)
{
    *pToNumOne = 35;
    *pToNumTwo = 22;

    printf("numOne has been changed to: %d\n", *pToNumOne);
    printf("numTwo has been changed to: %d\n", *pToNumTwo);

    return;
}

int main()
{
    int numOne = 10;
    int numTwo = 69;

    printf("the unchanged numbers are %d and %d\n", numOne, numTwo);

    changeNumber(&numOne, &numTwo);

    printf("In main() the function changeNumber has morphed the variables into %d and %d\n", numOne, numTwo);

    return 0;
}