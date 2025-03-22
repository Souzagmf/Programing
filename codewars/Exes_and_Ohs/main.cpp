#include <iostream>

bool XO(const std::string &str);
int count(char ltr, const std::string &str);

int main()
{
	std::cout << std::boolalpha;
	std::cout << XO("ababababao") << std::endl; // true
}

bool XO(const std::string &str)
{
	char x = str[0];
	int count_x = count('x', str) + count('X', str);
	int count_o = count('o', str) + count('O', str);

	if (count_x != count_o)
	{
		return false;
	}

	return true;
}

int count(char ltr, const std::string &str)
{
	size_t count{0}, index{0};
	while (str.length() > index)
	{
		if (ltr == str[index])
		{
			count++;
		}
		index++;
	}
	return count;
}