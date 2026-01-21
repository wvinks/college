// Read a string and check if it equals “hello”

#include <iostream>
#include <string>

int main() {
    std::string x;

    std::cout << "enter a string: ";
    std::cin >> x;

    if (x == "hello") {
        std::cout << "yes" << std::endl;
    }

    else {
         std::cout << "no" << std::endl;
    }

return 0;
}

