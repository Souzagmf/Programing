#ifndef SQTR_H
#define SQTR_H

#include <string>
#include <iostream>

long int findNextSquare(long int sq);

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