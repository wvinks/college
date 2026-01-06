// Read a number and print the first even digit (from the right) //

#include <iostream>

int main () {
    int n;
    int d;

    std::cout << "enter a number: ";
    std::cin >> n;

    while (n > 0) {
           d = n%10;

           if (d%2 == 0) {
               std::cout << "the first even digit (from the right): " << d << std::endl;
               return 0;
           }
    n = n/10;
    }

    std::cout << "your number does not have even digits" << std::endl;

return 0;
}



