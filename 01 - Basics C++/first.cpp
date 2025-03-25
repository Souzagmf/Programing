#include <iostream>

int main() {

    char *name;
    int age;

    std::cout << "What's your name? " << std::endl;
    std::cin >> name;
    std::cout << "Tell me your age" << std::endl;
    std::cin >> age;


    if(age < 18) {
        std::cout << "Hello " << name << " you are so young, nice to meet you!" << std::endl;
    } else if (age > 18 && age < 30) {
        std::cout << "Hello " << name << " you are so great and heathly, nice to meet you!" << std::endl;
    } else {
        std::cout << "Hello " << name << " you have much experience about life, nice to meet you!" << std::endl;
    }
    return 0;
}