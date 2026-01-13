// Read a number and print "YES" if it belongs to [10; 100], otherwise "NO"

#include <iostream>

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    if (n >= 10 && n <= 100) {
        std::cout << "YES!" << std::endl;
    }

    else {
         std::cout << "NO" << std::endl;
    }

return 0;
}
