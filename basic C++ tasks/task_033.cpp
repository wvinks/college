// Read an integer N and count digits greater than 5 //

#include <iostream>

int main() {
    int n;
    int count = 0;

    std::cout << "enter the number: ";
    std::cin >> n;

    while (n > 0) {
           int d;
           d = n%10;

           if (d > 5) {
               count++;
           }
    n = n/10;
    }

    std::cout << "amount of digits in the number greater than 5: " << count << std::endl;

return 0;
}
