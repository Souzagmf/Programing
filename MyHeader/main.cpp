#include "bellout.h"
#include <string>
#include <vector>

using V = std::vector<int>;

int count(int str, const std::vector<int> &numbers);

int findOdd(const std::vector<int> &numbers)
{
	int str{0};
	size_t index{0};
	while (numbers.size() > index)
	{
		str = numbers[index];
		if (count(str, numbers) % 2 != 0)
		{
			return str;
		}
		index++;
	}
	return 0;
}

int count(int str, const std::vector<int> &numbers)
{
	size_t count{0}, index{0};
	while (numbers.size() > index)
	{
		if (str == numbers[index])
		{
			count++;
		}
		index++;
	}
	return count;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		writeS("Usage: ./bellout <string>");
		return 1;
	}
	std::string str = av[1];

	writeS("Odd N:");
	writeS(findOdd(V{0, -5, -7, -5, -2, -3, 2, 8, 0, -7, 1, -7, 3, 0, 1, 9, 3, 8, 8, 0, 5, 0, -7, 0, 5, -3, 9, 3, 2, 0, 3, -5, 2, -5, -5, -7, -5, 0, 8, -5, 1, 3, 9, 9, 1, 1, -2, -2, -5, -2, 0, 9, -5, -8, -3, 2, -5, 5, 0, -3, 9, -3, 0, -8, 9, 9, 3, 1, 0, -7, 3, 5, 9, 9, 3, -3, 0, 9, 2, 0, -2, 9, 1, 2, 9, 0, 5, 5, -7, 9, 9, 0, -7, -7, -5, -7, 1, -7, 0, 5, 2, 0, -7, 3, -2, 0, 5, 5, 9, 3, -5, 9, 5, 0, -3, -3, 9, -3, 2}));

	return 0;
}