#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char reverse(const char str[]);


int main()
{
	char str[] = "Samuel";

	reverse(str);
	
	return 0;
}

char reverse(const char str[])
{
	int arr_length = strlen(str);
	int i;
	char reversed_string[100];

	printf("The reverse of the string %s is: \n", str);

	for(arr_length, i = 0; arr_length != -1; arr_length--, i++)
	{
		printf("%c", str[arr_length]); 
	}
	printf("\n");

}
