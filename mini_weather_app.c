#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MONTHS 12
#define YEARS 5

int main()
{
	float rain[YEARS][MONTHS] = 
	{	
		{0.5, 1.4, 4.0, 2.0, 5.0, 0.0, 0.1, 0.0, 0.2, 0.3, 2.4, 5.0},
		{1.5, 1.3, 4.0, 2.0, 5.2, 0.0, 0.1, 0.4, 0.2, 2.3, 4.6, 6.0},
		{5.5, 5.6, 4.9, 1.5, 5.4, 6.1, 3.5, 3.7, 0.2, 3.5, 8.2, 2.0},
		{0.5, 1.5, 7.0, 2.0, 5.3, 8.8, 0.1, 6.0, 5.2, 6.3, 0.4, 8.0},
		{9.1, 7.4, 4.0, 9.0, 5.0, 0.4, 0.1, 0.9, 0.2, 2.3, 2.8, 4.0},
	};
	
	int year, month;

	float total, subtotal;

	printf("YEAR\tRAINFALL  (inches)\n");

	for (year = 0, total = 0; year < YEARS; year++)
	{
		for(month=0, subtotal = 0; month < MONTHS; month++)
		{
			subtotal += rain[year][month];

		}
		printf("%5d\t\t%15.1f\n", 2010 + year, subtotal);
		total += subtotal;
	}

	printf("\nThe yearly average is %.1f inches.\n\n", total/YEARS);

	printf("MONTHLY AVERAGES: \n\n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

	for (month = 0; month < MONTHS; month++)
	{
		for(year = 0, subtotal = 0; year < YEARS; year++)
			subtotal += rain[year][month];
		printf("%4.1f ", subtotal/YEARS);
	}

	printf("\n");



	return 0;
}


