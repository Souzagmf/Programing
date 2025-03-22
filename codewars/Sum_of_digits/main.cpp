#include <iostream>
#include <utility>
#include <vector>
#include "sum.h"

int main(int argc, char *argv[])
{
	int nbr{0};

	if (argc != 2)
	{
		writeS("Usage: ./sum <number>\n");
		return (1);
	}

	try
	{
		nbr = std::stoi(std::string(argv[1]));
	}
	catch (std::invalid_argument &e)
	{
		writeS("Invalid argument: ");
		writeS(e.what());
		return (1);
	}
	catch (std::out_of_range &e)
	{
		writeS("Out of range: ");
		writeS(e.what());
		return (1);
	}

	writeS("\n******************************\n");
	writeS("Sum of digits\n");
	writeS(digital_root(nbr));
	writeS("\n******************************\n");
	return (0);
}