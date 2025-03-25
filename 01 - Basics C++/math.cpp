#include <iostream>
#include <iomanip>
#include <cmath>

int main(void)
{
    float weight {7.49963};
    std::cout << "FLOOR | CEIL | ROUND " << std::endl;
    std::cout << "Weight rouded to floor is: " << std::floor(weight) << std::endl;
    std::cout << "Weight rouded to ceil is: " << std::ceil(weight) << std::endl;
    std::cout << "Weight rouded to round is: " << std::round(weight) << std::endl;
    std::cout << std::endl;

    float savings {-5000};
    std::cout << "ABS" << std::endl;
    std::cout << "Abs of weight is: " << std::abs(weight) << std::endl;
    std::cout << "Abs of savings is: " << std::abs(savings) << std::endl;
    std::cout << std::endl;

    float exponencial = std::exp(10);
    std::cout << "EXP" << std::endl;
    std::cout << "Exponencial of 10 is: " << exponencial << std::endl;
    std::cout << std::endl;

    int nbr {5};
    int power {3};
    std::cout << "POW" << std::endl;
    std::cout << nbr << " ^ " << power << " is: " << std::pow(nbr, power) << std::endl;
    std::cout << std::endl;

    nbr = 125;
    std::cout << "LOG" << std::endl;
    std::cout << "Log of " << nbr << " is: " << std::log(nbr) << std::endl;
    std::cout << "Log 10 of " << nbr << " is: " << std::log10(nbr) << std::endl;
    std::cout << std::endl;

    nbr = 125 ;
    std::cout << "SQRT" << std::endl;
    std::cout << "Square root of " << nbr << " is: " << std::sqrt(nbr) << std::endl;
    std::cout << std::endl;
}