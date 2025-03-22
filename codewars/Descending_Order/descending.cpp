/*
Your task is to make a function that can take any non-negative integer as an argument
and return it with its digits in descending order. Essentially, rearrange the digits
to create the highest possible number.

Examples:

Input: 42145 Output: 54421

Input: 145263 Output: 654321

Input: 123456789 Output: 987654321

*/

#include "descending.h"
#include <string>
#include <cinttypes>

unsigned long long convertToInt(std::string str);

uint64_t descendingOrder(uint64_t a)
{
	std::string str = std::to_string(a);
	size_t i = 0, j = 0;

	while (str[i])
	{
		j = i;
		while (str[j])
		{
			if (str[i] < str[j])
			{
				std::swap(str[i], str[j]);
			}
			j++;
		}
		i++;
	}

	int result = convertToInt(str);

	return ((uint64_t)result);
}

unsigned long long convertToInt(std::string str)
{
	unsigned long long result = 0;
	for (size_t i = 0; i < str.size(); i++)
	{
		result = result * 10 + (str[i] - '0');
	}
	return result;
}
