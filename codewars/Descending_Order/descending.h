#ifndef DESCENDING_H
#define DESCENDING_H

#include <string>
#include <iostream>
#include <utility>
#include <vector>
#include <cinttypes>

uint64_t descendingOrder(uint64_t a);

/************   TEMPLATES ***************/
template <typename T>
void writeS(T str)
{
	std::cout << str;
	return;
}

template <typename T>
T readS(void)
{
	T str;
	std::cin >> str;
	return (str);
}

template <typename T>
T StrToInt(std::string str)
{
	T result = 0;
	for (size_t i = 0; i < str.size(); i++)
	{
		result = result * 10 + (str[i] - '0');
	}
	return result;
}



#endif // SUM_H