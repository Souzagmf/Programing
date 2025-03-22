#ifndef BELLOUT_H
#define BELLOUT_H

#include <iostream>
#include <string>
#include <type_traits>

// To convert a string to a number
int convertToNbr(std::string &str);

// To print to the console
template <typename T>
void writeS(T str)
{
	std::cout << str;
	return;
}

// To read from the console
template <typename T>
T readS(void)
{
	T str;
	std::cin >> str;
	return str;
}

// To swap two values
template <typename T>
void swapValues(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
	return;
}

// Convert a number to a string
template <typename T>
typename std::enable_if<std::is_integral<T>::value, std::string>::type convertToStr(T nbr)
{
	if (nbr == 0)
	{
		return "0";
	}
	std::string str;
	bool isNegative = false;
	if (nbr < 0)
	{
		isNegative = true;
		nbr = -nbr;
	}
	if (nbr / 10)
	{
		str = convertToStr(nbr / 10);
	}
	str += (nbr % 10) + '0';
	if (isNegative)
	{
		str = '-' + str;
	}
	return str;
}

// To sort a string in descending order
template <typename T>
T sortDescending(std::string str)
{
	size_t i{0};
	size_t j;

	if (str.empty())
		return str;

	while (str[i])
	{
		j = i;
		while (str[j])
		{
			if (str[i] < str[j])
			{
				swapValues(str[i], str[j]);
			}
			j++;
		}
		i++;
	}
	return str;
}

// To sort a string in ascending order
template <typename T>
T sortAscending(std::string str)
{
	size_t i{0};
	size_t j;

	if (str.empty())
		return str;

	while (str[i])
	{
		j = i;
		while (str[j])
		{
			if (str[i] > str[j])
			{
				swapValues(str[i], str[j]);
			}
			j++;
		}
		i++;
	}
	return str;
}

// To convert a string to a number
template <typename T>
T convertToNbr(std::string &str)
{
	size_t index = 0;
	bool isNegative = false;

	if (str.empty())
	{
		return 0;
	}
	while (str[index] >= 9 && str[index] <= 15)
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
		{
			index++;
			isNegative = true;
			break;
		}
	}
	int nbr{0};
	while (str[index] >= '0' && str[index] <= '9')
	{
		nbr = nbr * 10 + (str[index] - '0');
		index++;
	}
	if (isNegative)
	{
		nbr = -nbr;
	}
	return nbr;
}

// To check if a variable is of a certain type
template <typename T>
bool isType(T &var)
{
	if (std::is_same<T, int>::value)
	{
		return true;
	}
	else if (std::is_same<T, float>::value)
	{
		return true;
	}
	else if (std::is_same<T, double>::value)
	{
		return true;
	}
	else if (std::is_same<T, char>::value)
	{
		return true;
	}
	else if (std::is_same<T, std::string>::value)
	{
		return true;
	}
	return false;
}
#endif