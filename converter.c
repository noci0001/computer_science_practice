#include <stdio.h>

int main()
{
	int  mins;
	double mins_in_year, year, days;
	printf("Please enter the number of minutes you want to convert:");
	
	scanf("%d", &mins);
	printf("\n");

	mins_in_year = 60 * 24 * 365;

	year = mins / mins_in_year;

	days = (mins % (int)mins_in_year) / 1440;
	


	printf("%i mins are equivalent to %d years and %d days.\n", mins, (int)year, (int)days);	
	

	return 0;
}
