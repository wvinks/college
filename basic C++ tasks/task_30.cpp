// Read the number N. Display its digits in mirror image one after the other //

#include <iostream>

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    std::cout << "the digits of your number: ";

    while (n > 0) {
           int d;
           d = n%10;
           std::cout << d << " ";
           n = n/10;
    }

    std::cout << std::endl;

return 0;
}
