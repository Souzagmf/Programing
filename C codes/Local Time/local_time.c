/* Create a timer digital */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void func_local(void);

int main(void)
{
	while (!0)
	{
		/* code */
		func_local();
	}
}

void func_local(void)
{
	system("clear");

	time_t current_time;

	current_time = time(NULL); // take the time actual

	struct tm *loctime = localtime(&current_time);

	// show the timer
	printf("**************    %02d / %02d / %04d  ********************\n", loctime->tm_mday, loctime->tm_mon + 1, loctime->tm_year);
	printf("************** %02d : %02d : %02d   ******************\n\n\n\n", loctime->tm_hour, loctime->tm_min, loctime->tm_sec);
	fflush(stdout);
	sleep(1);
	return;
}