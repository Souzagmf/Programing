#include "hangman.h"
#include "bellout.h"
#include <string>

int main()
{
	while (true)
	{
		system("clear");
		showMain();
		int option;
		readS<int>(option);

		writeS("\n");

		if (option == 1)
		{
			beginGame();
		}
		else if (option == 2)
		{
			writeS("Exiting the game...\n");
			return (0);
		}
		system("clear");
	}
	// Add more game logic here as needed

	return (0);
}