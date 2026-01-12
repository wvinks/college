// Read N number and print: positive, negative or zero 

#include <iostream>

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    if (n > 0) {
        std::cout << "positive number" << std::endl;
    }

    else if (n < 0) {
             std::cout << "negative number" << std::endl;
    }

    else {
         std::cout << "zero" << std::endl;
    }

return 0;
}
