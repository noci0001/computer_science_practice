#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void greeting(char name[15]);

int main()
{
	char user_name[15];
	printf("Hello! What's your name?\n");
	scanf("%s", user_name);
	greeting(user_name);

	return 0;

}

void greeting( char name[20])
{
	
	char greeting[50] = "Hello ";
	strcat(greeting, name);
	printf("%s! Rock and roll!\n", greeting);
}
