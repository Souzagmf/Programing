#include <iostream>
#include <utility>
#include <vector>
#include "bus.h"

using V = std::pair<int, int>;
using V2 = std::vector<V>;

int main()
{

	writeS("\n******************************\n");
	writeS("Passageiros no onibus: ");
	writeS(number(V2{V{10, 0}, V{3, 5}, V{5, 8}}));
	writeS("\nPassageiros no onibus: ");
	writeS(number(V2{V{3, 0}, V{9, 1}, V{4, 10}, V{12, 2}, V{6, 1}, V{7, 10}}));
	writeS("\nPassageiros no onibus: ");
	writeS(number(V2{V{3, 0}, V{9, 1}, V{4, 8}, V{12, 2}, V{6, 1}, V{7, 8}}));
	writeS("\nPassageiros no onibus: ");
	writeS(number(V2{V{0, 0}}));
	writeS("\nPassageiros no onibus: ");
	writeS(number(V2{V{10, 0}, V{13, 0}, V{17, 40}}));
	writeS("\n******************************\n");
	return (0);
}