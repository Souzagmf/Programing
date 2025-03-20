#include "some_output.h"
#include <cmath>
#include <cstdlib>

void add_nbr()
{
    double n1, n2;
    std::string add_text = "  ADDITION  ";

    while (true)
    {
        takeInputTitle(n1, add_text);
        takeInputTitle(n2, add_text);

        system("clear");
        sep_title(add_text);
        result_text(); // Show result message
        writeS(">>>>>>  ");
        writeS(n1 + n2);
        writeS("  <<<<<<\n\n\n");

        writeS("Number 1: ");
        writeS(n1);
        writeS("\nNumber 2: ");
        writeS(n2);
        writeS("\n\n");

        if (endProgram())
        {
            system("clear");
            return;
        }
        system("clear");
        sep_title(add_text);
    }
    return;
}

void sub_nbr()
{
    double n1, n2;
    std::string sub_text = "  SUBTRACTION  ";

    while (true)
    {
        takeInputTitle(n1, sub_text);
        takeInputTitle(n2, sub_text);

        system("clear");
        sep_title(sub_text);
        result_text(); // Show result message
        writeS(">>>>>>  ");
        writeS(n1 - n2);
        writeS("  <<<<<<\n\n\n");

        writeS("Number 1: ");
        writeS(n1);
        writeS("\nNumber 2: ");
        writeS(n2);
        writeS("\n\n");

        if (endProgram())
        {
            system("clear");
            return;
        }
        system("clear");
        sep_title(sub_text);
    }
    return;
}

void mul_nbr()
{
    double n1, n2;
    std::string mul_text = "  MULTIPLICATION  ";

    while (true)
    {
        takeInputTitle(n1, mul_text);
        takeInputTitle(n2, mul_text);

        system("clear");
        sep_title(mul_text);
        result_text(); // Show result message
        writeS(">>>>>>  ");
        writeS(n1 * n2);
        writeS("  <<<<<<\n\n\n");

        writeS("Number 1: ");
        writeS(n1);
        writeS("\nNumber 2: ");
        writeS(n2);
        writeS("\n\n");

        if (endProgram())
        {
            system("clear");
            return;
        }
        system("clear");
        sep_title(mul_text);
    }
    return;
}

void div_nbr()
{
    double n1, n2;
    std::string div_text = "  DIVISION  ";

    while (true)
    {
        takeInputTitle(n1, div_text);
        takeInputTitle(n2, div_text);

        system("clear");
        sep_title(div_text);
        result_text(); // Show result message
        writeS(">>>>>>  ");
        writeS(n1 / n2);
        writeS("  <<<<<<\n\n\n");

        writeS("Number 1: ");
        writeS(n1);
        writeS("\nNumber 2: ");
        writeS(n2);
        writeS("\n\n");

        if (endProgram())
        {
            system("clear");
            return;
        }
        system("clear");
        sep_title(div_text);
    }
    return;
}

void mod_nbr()
{
    double n1, n2;
    std::string mod_text = "  MODULUS  ";

    while (true)
    {
        takeInputTitle(n1, mod_text);
        takeInputTitle(n2, mod_text);

        system("clear");
        sep_title(mod_text);
        result_text(); // Show result message
        writeS(">>>>>>  ");
        writeS(fmod(n1, n2));
        writeS("  <<<<<<\n\n\n");

        writeS("Number 1: ");
        writeS(n1);
        writeS("\nNumber 2: ");
        writeS(n2);
        writeS("\n\n");

        if (endProgram())
        {
            system("clear");
            return;
        }
        system("clear");
        sep_title(mod_text);
    }
    return;
}

void pow_nbr()
{
    double n1, n2;
    std::string pow_text = "  POWER  ";

    while (true)
    {
        takeInputTitle(n1, pow_text);
        takeInputTitle(n2, pow_text);

        system("clear");
        sep_title(pow_text);
        result_text(); // Show result message
        writeS(">>>>>>  ");
        writeS(pow(n1, n2));
        writeS("  <<<<<<\n\n\n");

        writeS("Number 1: ");
        writeS(n1);
        writeS("\nNumber 2: ");
        writeS(n2);
        writeS("\n\n");

        if (endProgram())
        {
            system("clear");
            return;
        }
        system("clear");
        sep_title(pow_text);
    }
    return;
}

void sqrt_nbr()
{
    double n1;
    std::string sqrt_text = "  SQUARE ROOT  ";

    while (true)
    {
        takeInputTitle(n1, sqrt_text);

        system("clear");
        sep_title(sqrt_text);
        result_text(); // Show result message
        writeS(">>>>>>  ");
        writeS(sqrt(n1));
        writeS("  <<<<<<\n\n\n");

        writeS("Number 1: ");
        writeS(n1);
        writeS("\n\n");

        if (endProgram())
        {
            system("clear");
            return;
        }
        system("clear");
        sep_title(sqrt_text);
    }
    return;
}