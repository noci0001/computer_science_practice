#include <stdio.h>
#include <stdlib.h>

int strLen(char const* ptr)
{
	int count = 0;

	while(*ptr)
	{
		count += 1;

		++ptr;
	}
	
	return count;
}

int main()
{
	char str[] = {"STUPID"};

	printf("The string length is equal to %d\n", strLen(str));

	return 0;
}
