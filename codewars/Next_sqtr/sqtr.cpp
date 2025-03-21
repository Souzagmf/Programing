/*
Complete the findNextSquare method that finds the next integral perfect square after
the one passed as a parameter. Recall that an integral perfect square is an
integer n such that sqrt(n) is also an integer.

If the argument is itself not a perfect square then return either -1 or an empty value
like None or null, depending on your language. You may assume the argument is non-negative.
*/

#include "sqtr.h"
#include <cmath>

long int findNextSquare(long int sq)
{
	auto sqr = sqrt(sq);
	if (std::floor(sqr) != sqr)
		return -1;

	long int next_sqrt = (sqr + 1) * (sqr + 1);
	return next_sqrt;
}