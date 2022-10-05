#include <stdio.h>

int main()
{
	float hours_this_week;
	printf("How many hours have you worked this week?\n");
	scanf("%2f", &hours_this_week);
	printf("You worked %i hours, so it means that:\n", (int) hours_this_week);
	
	float gross_income, gross_extra_hours, basic_pay, net_income;

	int extra_hours = hours_this_week - 40;

	if(extra_hours > 0)
	{
		basic_pay = 12.00 * 40;
		gross_extra_hours = extra_hours * 12 * 1.5;
		gross_income = basic_pay + gross_extra_hours;
		printf("Your gross income amounts with extras to %.2f euros\n", gross_income);
	} else
	{
		basic_pay = 12.00 * hours_this_week;
		gross_income = basic_pay;
		printf("Your gross income amounts to %.2f euros\n", gross_income);
	}
	
	
	float tax_deduction1 = gross_income * 0.15;
	float tax_deduction2 = (gross_income - 300) * 0.20;
	float tax_deduction3 = (gross_income - 300 - 150) * 0.25;

	if(gross_income >= 300)
	{
		net_income = gross_income - tax_deduction1;
		printf("Your net income is equal to %.2f euros.\n", net_income);

	} else if (gross_income >= 450)
	{
		net_income = gross_income - (tax_deduction2 + tax_deduction1);

		printf("Your net income is equal to %.2f euros\n", net_income);

	} else 
	{
		net_income = gross_income - (tax_deduction1 + tax_deduction2 + tax_deduction3);
	
		printf("Your net income is equal to %.2f euros\n", net_income);
	}


	return 0;
}
