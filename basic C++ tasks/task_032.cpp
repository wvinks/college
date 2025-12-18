// Read a number and print "YES" if its last digit is 1, otherwise "NO" //

#include <iostream>

int main() {
    int n;
    int d;

    std::cout << "enter the number: ";
    std::cin >> n;

    d = n%10;

    if (d == 1) {
        std::cout << "YES!" << std::endl;
        return 0;
    }

    else if (d == 0 | d > 1) {
             std::cout << "NO" << std::endl;
             return 0;
    }

}

