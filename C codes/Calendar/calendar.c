#include <stdio.h>

#define TRUE 1
#define FALSE 0

int days_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

char *months[] = {
	" ",
	"\n\n\nJanuary",
	"\n\n\nFebruary",
	"\n\n\nMarch",
	"\n\n\nApril",
	"\n\n\nMay",
	"\n\n\nJune",
	"\n\n\nJuly",
	"\n\n\nAugust",
	"\n\n\nSeptember",
	"\n\n\nOctober",
	"\n\n\nNovember",
	"\n\n\nDecember"};

int type_year(void)
{
	int year;
	printf("Please type a year (ex: 1999): \n-> ");
	scanf("%d", &year);
	return year;
}

int determine_year_leap(int year)
{
	if ((year % 4 == FALSE && year % 100 == FALSE) || year % 400 == FALSE)
	{
		days_month[2] = 29;
		return TRUE;
	}
	else
	{
		days_month[2] = 28;
		return FALSE;
	}
}

int determine_code_day(int year)
{
	int day;
	int d1, d2, d3;

	d1 = (year - 1.) / 4.0;
	d2 = (year - 1.) / 100.0;
	d3 = (year - 1.) / 400.0;
	day = (year + d1 - d2 + d3) % 7;
	return day;
}

void calendar_show(int year, int daycode)
{
	int month, day;

	for (month = 1; month <= 12; month++)
	{
		printf("%s", months[month]);
		printf("\n\nSat   Mon   Tue   Wed   Thu   Fri   Sat\n");

		for (day = 0; day < daycode; day++)
		{
			printf("      ");
		}
		for (day = 1; day <= days_month[month]; day++)
		{
			printf("%2d", day);
			if (((day + daycode) % 7) > 0)
				printf("    ");
			else
				printf("\n");
		}
		daycode = (daycode + days_month[month]) % 7;
	}
}
int main(void)
{
	int year, code_day, leap_year;
	year = type_year();
	code_day = determine_code_day(year);
	determine_year_leap(year);
	calendar_show(year, code_day);
	printf("\n");
	return (0);
}