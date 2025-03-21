#include <iostream>
#include "sqtr.h"

int main()
{
	writeS("\n******************************\n");
	writeS(findNextSquare(121));
	writeS("\n");
	writeS(findNextSquare(625));
	writeS("\n");
	writeS(findNextSquare(319225));
	writeS("\n");
	writeS(findNextSquare(15241383936));
	writeS("\n");
	writeS(findNextSquare(155));
	writeS("\n******************************\n");
	return (0);
}