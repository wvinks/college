#include <iostream>
#include <string>

int main () {
    int number;
    std::cout << "enter a number: ";
    std::cin >> number;

    std::string str = std::to_string(number);
    std::cout <<"your number as a string: "<< str <<std::endl;

    return 0;
}

