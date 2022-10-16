#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strCountnCat(void);


int main()
{
	strCountnCat();

	return 0;

}


void strCountnCat(void)
{
	char str1[50];
	char str2[50];
	char result[100];

        printf("NO SPACES! Insert the first string of which characters you want to count.\n");
        scanf("%s", str1);
        printf("You want to count the following string \" %s \" \n", str1);

	printf("NO SPACES! Insert the second string\n");
        scanf("%s", str2);
        printf("You want to concatenate the following string \" %s \" \n", str2);

        int i = 0;
	int j = 0;
        int str1_length = 0;
	int str2_length = 0;

        while(str1[i] != '\0')
        {
                ++i;
        }

        str1_length = i;

	while(str2[j] != '\0')
        {
                ++j;
        }

        str2_length = j;

	int result_length = str1_length + str2_length;

	int i1;
	int j1,k;
	
	printf(" i is currently equal to %d", j1);

	for(j1 = 0; j1 < str1_length; j1++)
	{
		result[j1] = str1[j1];
	}

	printf(" i is currently equal to %d", j1);

	for(k = 0; str2[k] != '\0'; ++k)
	{
		result[j1 + k] = str2[k]; 
	}

	result[j1 + k] = '\0';

	printf(" i is currently equal to %d", j1);
	
        printf("Your first string contains %d characters.\n", str1_length);

	printf("%s\n", result);

};

