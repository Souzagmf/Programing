/*
You are given an array (which will have a length of at least 3, but could be very large)
containing integers. The array is either entirely comprised of odd integers or entirely
comprised of even integers except for a single integer N. Write a method that takes the
array as an argument and returns this "outlier" N.

Examples

[2, 4, 0, 100, 4, 11, 2602, 36] -->  11 (the only odd number)

[160, 3, 1719, 19, 11, 13, -21] --> 160 (the only even number)

*/

#include <iostream>
#include <vector>

int FindOutlier(std::vector<int> arr);
std::pair<int, int> countOdd(const std::vector<int> &numbers);
std::pair<int, int> countEven(const std::vector<int> &numbers);
std::pair<int, int> countEven(const std::vector<int> &numbers);

int main(void)
{
	std::vector<int> arr = {160, 3, 1719, 19, 11, 13, -21};
	int result = FindOutlier(arr);
	std::cout << result << std::endl;
	return (0);
}

int FindOutlier(std::vector<int> arr)
{
	int index = 0;
	std::pair<int, int> even_count = countEven(arr);
	std::pair<int, int> odd_count = countOdd(arr);

	if (even_count.second < odd_count.second)
		return (even_count.first);
	if (even_count.second > odd_count.second)
		return (odd_count.first);

	return (0);
}

std::pair<int, int> countEven(const std::vector<int> &numbers)
{
	std::pair<int, int> countEven{0, 0};

	size_t index{0};
	while (numbers.size() > index)
	{
		if (numbers[index] % 2 == 0)
		{
			countEven.first = numbers[index];
			countEven.second++;
		}
		index++;
	}
	return countEven;
}

std::pair<int, int> countOdd(const std::vector<int> &numbers)
{
	std::pair<int, int> countOdd{0, 0};

	size_t index{0};
	while (numbers.size() > index)
	{
		if (numbers[index] % 2 != 0)
		{
			countOdd.first = numbers[index];
			countOdd.second++;
		}
		index++;
	}
	return countOdd;
}
