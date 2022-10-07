#include <stdio.h>
#include <stdlib.h>

int gcd(int num1, int num2);

float absolute(float num1);

int main()
{
	gcd(1701, 3768);
	absolute(-30);
	absolute(29);
	return 0;
}


//create function that finds the greates common divisor of two non-negative values and returns the result 

int gcd(int num1, int num2)
{
	int i, gcd;

	for (i = 1; i <= num1 && i <= num2; ++i)
	{
		if(num1%i==0 && num2%i==0)
			gcd = i;
	}
	
	printf("GCD of %d and %d is %d\n", num1, num2, gcd);
}	

//create a function that calculate the absolute value of a number, 

float absolute(float num1)
{
	float result;
	if(num1 < 0)
	{
		result = -(num1);
	} else
		result = num1;

	printf("%.2f\n", result);
}
