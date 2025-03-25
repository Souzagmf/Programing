#include "hangman.h"
#include "bellout.h"
#include <string>
#include <limits>
#include <iostream>

void waitInput(void);
void beginGame();

void showMain()
{
	writeS("########   Welcome to Hangman Game   ########\n");
	writeS("#       1  ----->  Start Game               #\n");
	writeS("#       2  ----->  Exit                     #\n");
	writeS("#############################################\n\n");

	writeS("Choose an option: ");
}

void WordToGuess()
{
	writeS("Enter the word to guess: ");
	std::string word;
	readS<std::string>(word);
	writeS("\n");
	waitInput();
}

void beginGame()
{
	writeS("Game started!\n");

	WordToGuess();
	// Game logic goes here
	return;
}

void gameWin()
{
	writeS("Congratulations! You won!\n");
	// Winning logic goes here
}

void gameOver()
{
	writeS("Game over!\n");
	// Game over logic goes here
}

void waitInput(void)
{
	writeS("Press Enter to continue...");
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	writeS("\n");
	std::cin.get(); // Wait for the user to press Enter
}
