// Read two strings and check if they are the same

#include <iostream>
#include <string>

int main() {
    std::string f;
    std::string s;

    std::cout << "enter the first string: ";
    std::cin >> f;

    std::cout << "enter the second string: ";
    std::cin >> s;

    if (f == s) {
        std::cout << "yes, they are the same" << std::endl;
    }

    else {
         std::cout << "no, they are different" << std::endl;
    }

return 0;
}
