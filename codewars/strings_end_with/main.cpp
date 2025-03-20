#include <iostream>
#include "ends.h"

int main(int ac, char **av)
{
	/*if (ac != 3)
	{
		writeS("Input not valid\n");
		return (-1);
	}*/

	writeS(solution("abcde", "cde"));
	writeS("\n");
	writeS(solution("abcde", "abc"));
	writeS("\n");
	writeS(solution("abc", ""));

	writeS("\nDone!\n");
	return (0);
}
