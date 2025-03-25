#include <iostream>

int main(void)
{
    short int nbr1 {10};
    short int nbr2 {20};

    char ltr1 {40};
    char ltr2 {50};

    std::cout << "Size of short int: " << sizeof(nbr1) << std::endl;
    std::cout << "Size of short int: " << sizeof(nbr2) << std::endl;
    std::cout << "Size of char: " << sizeof(ltr1) << std::endl;
    std::cout << "Size of char: " << sizeof(ltr2) << std::endl;
    std::cout << std::endl;

    auto reuslt1 = nbr1 + nbr2; //convert to integer 
    auto result2 = ltr1 + ltr2; //convert to integer
    
    std::cout << "Result of short int: " << reuslt1 << std::endl;
    std::cout << "Result of char: " << result2 << std::endl;
    std::cout << "Size of auto: " << sizeof(reuslt1) << std::endl;
    std::cout << "Size of auto: " << sizeof(result2) << std::endl;
    std::cout << std::endl;
    std::cout << "Integer size: " << sizeof(int) << std::endl;
    std::cout << "Short integer size: " << sizeof(short int) << std::endl;
    std::cout << "Char size: " << sizeof(char) << std::endl;
}