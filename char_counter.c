#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char buff[100];
	int nLetters = 0;
	int nDigits = 0;
	int nPunct = 0;

	printf("!!WITHOUT ANY SPACES!! Enter an interesting string of less than %d characters:\n", 100);
	scanf("%s", buff);

	int i = 0;
	while(buff[i])
	{

		if(isalpha(buff[i]))
			++nLetters;
		else if(isdigit(buff[i]))
			++nDigits;
		else if(ispunct(buff[i]))
			++nPunct;
		++i;
	}

	printf("\nYour string contained %d letters, %d digits and %d punctuation characters.", nLetters, nDigits, nPunct);

	return 0;	
}
