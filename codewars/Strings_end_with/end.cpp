#include <string>
#include "ends.h"

bool solution(std::string const &str, std::string const &ending)
{
	int index{0};
	int index_end{0};

	if (str.length() < ending.length())
		return (false);
	if (ending == "")
		return (true);
	while (str[index])
		index++;
	while (ending[index_end])
		index_end++;

	while (str[index] == ending[index_end])
	{
		index--;
		index_end--;
		if (index_end == 0 && str[index] == ending[index_end])
		{
			return true;
		}
	}
	return false;
}