/*
There is a bus moving in the city which takes and drops some people at each bus stop.

You are provided with a list (or array) of integer pairs. Elements of each pair represent
the number of people that get on the bus (the first item) and the number of people that get
off the bus (the second item) at a bus stop.

Your task is to return the number of people who are still on the bus after the last bus stop
(after the last array). Even though it is the last bus stop, the bus might not be empty and
some people might still be inside the bus, they are probably sleeping there :D

Take a look on the test cases.

Please keep in mind that the test cases ensure that the number of people in the bus is always >= 0.
So the returned integer can't be negative.

The second value in the first pair in the array is 0, since the bus is empty in the first bus stop.


############################################################################################################

using V = std::pair<int, int>;
using V2 = std::vector<V>;

Describe(Number){
  It(BasicTests){
	writeS(number(V2{V{10,0},V{3,5},V{5,8}}), Equals(5));
	writeS(number(V2{V{3,0},V{9,1},V{4,10},V{12,2},V{6,1},V{7,10}}), Equals(17));
	writeS(number(V2{V{3,0},V{9,1},V{4,8},V{12,2},V{6,1},V{7,8}}), Equals(21));
	writeS(number(V2{V{0,0}}), Equals(0));
	writeS(number(V2{V{10,0},V{13,0},V{17,40}}), Equals(0));
  }
};
*/

#include <utility>
#include <vector>
#include "bus.h"

unsigned int number(const std::vector<std::pair<int, int>> &busStops)
{
	int index{0};
	std::pair<int, int> passagers{0, 0};

	while (index < busStops.size())
	{
		passagers.first += busStops[index].first;
		passagers.second += busStops[index].second;
		index++;
	}

	return (passagers.first - passagers.second);
}