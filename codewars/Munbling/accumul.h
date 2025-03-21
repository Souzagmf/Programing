#ifndef ACCUMUL_H
#define ACCUMUL_H

#include <string>
#include <iostream>

class Accumul
{
public:
	static std::string accum(const std::string &s);
};

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

#endif // ACUMMUL_H