// Read a number N. Count digits that are divisible by 3 //

#include <iostream>

int main() {
    int n;
    int d;
    int count = 0;

    std::cout << "enter the number: ";
    std::cin >> n;

    while (n > 0) {
           d = n%10;
           n = n/10;

           if (d%3 == 0) {
               count++;
           }
    }

    std::cout << "the number of digits in your number that are divisible by 3: " << count << std::endl;

return 0;
}
