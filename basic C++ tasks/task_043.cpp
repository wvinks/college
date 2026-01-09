// Read a number N and count how many digits in it are equal to the last digit //

#include <iostream>

int main() {
    int n;
    int count = 0;

    std::cout << "enter a number: ";
    std::cin >> n;

    int ld;
    ld = n%10;

    while (n > 0) {
           int d;
           d = n%10;

           if (d == ld) {
               count++;
           }
    n = n/10;
    }

    std::cout << "amount of digits that equal the last digit: " << count << std::endl;

return 0;
}
