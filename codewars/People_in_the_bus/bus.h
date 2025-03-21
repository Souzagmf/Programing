#ifndef BUS_H
#define BUS_H

#include <string>
#include <iostream>
#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>> &busStops);

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

#endif // ENDS_H