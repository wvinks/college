// Read two numbers and print the smaller one

#include <iostream>

int main() {
    int a,b;

    std::cout << "enter the first number: ";
    std::cin >> a;

    std::cout << "enter the second number: ";
    std::cin >> b;

    if (a > b) {
        std::cout << "smaller number: " << b << std::endl;
    }

    else if (b > a) {
         std::cout << "smaller number: " << a << std::endl;
    }

    else {
         std::cout << "numbers are equal" << std::endl;
    }

return 0;
}
