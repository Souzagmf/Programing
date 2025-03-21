/*
This time no story, no theory. The examples below show you how to write function accum:

Examples:
accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"

The parameter of accum is a string which includes only letters from a..z and A..Z.

*/

#include "accumul.h"

std::string Accumul::accum(const std::string &s)
{
	std::string str_full;

	for (unsigned int i = 0; i < s.length(); i++)
	{
		for (unsigned int j = 0; j <= i; j++)
		{
			if (j == 0 && s[i] >= 'a' && s[i] <= 'z')
				str_full += (char)(s[i] - 32);
			else if (j != 0 && s[i] >= 'A' && s[i] <= 'Z')
				str_full += (char)(s[i] + 32);
			else
				str_full += s[i];
		}
		if (i != s.length() - 1)
			str_full += '-';
	}

	return (str_full);
}