// Read a number N and check if it contains digit 7

#include <iostream>

int main() {
    int n;
    int count = 0;

    std::cout << "enter a number: ";
    std::cin >> n;

    while (n > 0) {
           int d;
           d = n%10;
           n = n/10;

           if (d == 7) {
               count++;
           }
    }

    if (count > 0) {
       std::cout << "yes" << std::endl;
    }

    else {
         std::cout << "no" << std::endl;
    }

return 0;
}
