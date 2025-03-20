#ifndef SOME_OUTPUT_H
#define SOME_OUTPUT_H

#include <string>
#include <iostream>

//*** REFERENCES  ***//
void takeInputTitle(double &n1, std::string &text);
void selectorInput(int &nbr);
void sep_title(std::string str);
void sep_end(void);
void invalid_text(void);
void result_text(void);
bool inError(void);
void waitInput(void);
bool endProgram(void);
//*******************//

//*******  Print a string  ******//
template <typename T>
void writeS(T str)
{
    std::cout << str;
    return;
}
//*********************//
//*******  Read a string  ******//
template <typename T>
T readS()
{
    T input;
    std::cin >> input;
    return (input);
}
//************************//
#endif // SOME_OUTPUT_H