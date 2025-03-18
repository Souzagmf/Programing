#include <iostream>
#include <limits>
#include <iomanip>

int main() {

    int space = 25;

    std::cout << std::setfill('#');
    std::cout << "" << std::setw(30) << "" << "--LIMITS TYPE--" << "" << std::setw(30) << "" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::endl;
    std::cout << "        *TYPE*      " << std::setw(space) << "          *MIN*         " << std::setw(space) << "          *MAX*         " << std::endl;
    std::cout << std::left;
    std::cout << "Char:               " << std::setw(space) << std::numeric_limits<char>::min() << std::setw(space) << std::numeric_limits<char>::max() << std::endl;
    std::cout << "Integer:            " << std::setw(space) << std::numeric_limits<int>::min() << std::setw(space) << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Double:             " << std::setw(space) << std::numeric_limits<double>::min() << std::setw(space) << std::numeric_limits<double>::max() << std::endl;
    std::cout << "Float:              " << std::setw(space) << std::numeric_limits<float>::min() << std::setw(space) << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Short:              " << std::setw(space) << std::numeric_limits<short>::min() << std::setw(space) << std::numeric_limits<short>::max() << std::endl;
    std::cout << "Long:               " << std::setw(space) << std::numeric_limits<long>::min() << std::setw(space) << std::numeric_limits<long>::max() << std::endl;
    std::cout << "Long Long:          " << std::setw(space) << std::numeric_limits<long long>::min() << std::setw(space) << std::numeric_limits<long long>::max() << std::endl;
    std::cout << "Long Double:        " << std::setw(space) << std::numeric_limits<long double>::min() << std::setw(space) << std::numeric_limits<long double>::max() << std::endl;
    std::cout << "Unsigned Char:      " << std::setw(space) << std::numeric_limits<unsigned char>::min() << std::setw(space) << std::numeric_limits<unsigned char>::max() << std::endl;
    std::cout << "Unsigned Integer:   " << std::setw(space) << std::numeric_limits<unsigned int>::min() << std::setw(space) << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "Unsigned Long:      " << std::setw(space) << std::numeric_limits<unsigned long>::min() << std::setw(space) << std::numeric_limits<unsigned long>::max() << std::endl;
    std::cout << "Unsigned Short:     " << std::setw(space) << std::numeric_limits<unsigned short>::min() << std::setw(space) << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "Unsigned Long Long: " << std::setw(space) << std::numeric_limits<unsigned long long>::min() << std::setw(space) << std::numeric_limits<unsigned long long>::max() << std::endl;
    
    return 0;
}
