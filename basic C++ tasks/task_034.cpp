// Read a number and calculate the sum of all its odd digits //

#include <iostream>

int main() {
    int n;
    int sum = 0;

    std::cout << "enter the number: ";
    std::cin >> n;

    while (n > 0) {
           int d;
           d = n%10;
           n = n/10;

           if (d%2 == 1) {
               sum = sum + d;
           }
    }

    std::cout << "sum of odd digits in the number: " << sum << std::endl;

return 0;
}
