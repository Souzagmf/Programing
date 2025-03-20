#include <iostream>
#include <iomanip>
#include <string>

#include "some_output.h"

void takeInputTitle(double &nbr, std::string &text)
{
    while (true)
    {
        writeS("Enter the number: ");
        nbr = readS<double>();
        writeS("\n");
        if (!inError())
            break;
        system("clear");
        sep_title(text);
        writeS("\n\n");
        invalid_text(); // Show invalid input message
    }
}

void print_menu_text(void)
{
    writeS("\n\n");
    sep_title("   CALCULATOR   ");
    writeS("Type the type of yout operation\n\n");
    writeS("*******************************\n");
    writeS("*                             *\n");
    writeS("*   1 - Add                   *\n");
    writeS("*   2 - Subtract              *\n");
    writeS("*   3 - Multiply              *\n");
    writeS("*   4 - Divide                *\n");
    writeS("*   5 - Modulus               *\n");
    writeS("*   6 - Power                 *\n");
    writeS("*   7 - Square root           *\n");
    writeS("*   0 - Exit                  *\n");
    writeS("*                             *\n");
    writeS("*******************************\n");
}

void selectorInput(int &nbr)
{
    while (true)
    {
        print_menu_text();
        writeS("\nSelector: \n-> ");
        nbr = readS<int>();
        writeS("\n");
        if (!inError())
            break;
        system("clear");
        writeS("\n\n");
        invalid_text(); // Show invalid input message
        waitInput();    // Wait for input
        system("clear");
    }
}

void sep_title(std::string str)
{
    std::cout << std::setfill('*');
    std::cout << "" << std::setw(30) << "" << str << "" << std::setw(30) << "" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::endl;
    std::cout << std::endl;

    return;
}

void sep_end(void)
{
    std::cout << std::setfill('-');
    std::cout << std::endl;
    std::cout << "" << std::setw(70) << "" << std::endl;
    std::cout << std::setfill('*');
    std::cout << "" << std::setw(30) << "" << "    END   " << "" << std::setw(30) << "" << std::endl;
    std::cout << std::setfill('-');
    std::cout << "" << std::setw(70) << "" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::endl;
    return;
}

void invalid_text(void)
{
    std::cout << "#####################\n";
    std::cout << "##  INVALID INPUT  ##\n";
    std::cout << "#####################\n\n\n";
    return;
}

void result_text(void)
{
    std::cout << "#####################\n";
    std::cout << "##      RESULT     ##\n";
    std::cout << "#####################\n";
    return;
}

bool inError(void)
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        return (true);
    }
    return (false);
}

void waitInput(void)
{
    std::string str;
    writeS("Type something to exit: ");
    std::getline(std::cin, str);
    if (str.empty())
        return;
    return;
}

bool endProgram(void)
{
    while (true)
    {
        writeS("Continue? (Y/n): ");
        std::string input;

        input = readS<std::string>();
        if (input == "n" || input == "N" || input == "no" || input == "No" || input == "NO")
        {
            return (true);
        }
        else if (input == "y" || input == "Y" || input == "" || input == "yes" || input == "Yes" || input == "YES")
            return (false);
        else
            writeS("Invalid input, try again.\n");
    }
    sep_end();
}