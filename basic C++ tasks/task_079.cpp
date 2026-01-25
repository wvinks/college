// Write a function that returns true if a string equals "admin"

#include <iostream>
#include <string>

bool check(std::string a) {
     return a == "admin";
}

int main() {
    std::string n;

    std::cout << "enter a string: ";
    std::cin >> n;

    if (check(n)) {
        std::cout << "yes\n";
    }

    else {
         std::cout << "no\n";
    }

return 0;
}
