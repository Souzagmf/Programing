/* Create a timer digital */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void func_timer(void);

int main(void)
{
	func_timer();
}

void func_timer(void)
{
	int hour, minute, second;

	hour = minute = second = 0;
	while (1)
	{
		// clear the screen view
		system("clear");

		// show the timer
		printf("************** %02d : %02d : %02d ******************", hour, minute, second);

		fflush(stdout);

		second++;

		if (second == 60)
		{
			minute++;
			second = 0;
		}
		if (minute == 60)
		{
			minute = 0;
			second = 0;
			hour++;
		}
		if (hour == 24)
		{
			hour = minute = second = 0;
		}
		sleep(1);
	}
}