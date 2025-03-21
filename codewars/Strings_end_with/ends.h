#ifndef ENDS_H
#define ENDS_H

#include <string>
#include <iostream>

bool solution(std::string const &str, std::string const &ending);

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