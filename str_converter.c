#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{

	char text[100];
	char substring[40];
	int i;

	printf("!!WITHOUT ANY SPACES!! Enter the string to be searched (less than %d characters)", 100);
	scanf("%s", text);

	printf("\n!!WITHOUT ANY SPACES!! Enter the string sought (less than %d characters)", 40);
	scanf("%s", substring);

	printf("\nFirst string: %s\n", text);
	printf("\nSecond string: %s\n", substring);

	for(i=0; (text[i] = (char)toupper(text[i])) != '\0'; ++i);
	for(i=0; (substring[i] = (char)toupper(substring[i])) != '\0'; ++i);

	printf("\nThe second string %s found in the first.\n", ((strstr(text, substring) == NULL) ? "was not" : "was"));

	return 0;
}

