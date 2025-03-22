#ifndef SUM_H
#define SUM_H

#include <string>
#include <iostream>
#include <utility>
#include <vector>

int digital_root(int n);

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

#endif // SUM_H