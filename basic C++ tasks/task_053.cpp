// Read a number and print "YES" if it is divisible by both 3 and 5

#include <iostream>

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    if (n%3 == 0 && n%5 == 0) {
        std::cout << "YES" << std::endl;
    }

    else {
         std::cout << "NO" << std::endl;
    }

return 0;
}
