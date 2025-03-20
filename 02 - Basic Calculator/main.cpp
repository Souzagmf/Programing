#include <iostream>
#include <cstdlib>
#include "some_output.h"
#include "calcs.h"

int main()
{
    int selector;
    system("clear");
    while (true)
    {

        selectorInput(selector); // function that show the menu

        if (selector == 0)
        {
            sep_end();
            return (0);
        }
        system("clear");
        switch (selector)
        {
        case 1:
        {
            sep_title("  ADDITION  ");
            add_nbr();
            break;
        }
        case 2:
        {
            sep_title("  SUBTRACTION  ");
            sub_nbr();
            break;
        }
        case 3:
        {
            sep_title("  MULTIPLICATION  ");
            mul_nbr();
            break;
        }
        case 4:
        {
            sep_title("  DIVISION  ");
            div_nbr();
            break;
        }
        case 5:
        {
            sep_title("  MODULUS  ");
            mod_nbr();
            break;
        }
        case 6:
        {
            sep_title("  POWER  ");
            pow_nbr();
            break;
        }
        case 7:
        {
            sep_title("  SQUARE ROOT  ");
            sqrt_nbr();
            break;
        }

        default:
            break;
        }
    }
    return (0);
}