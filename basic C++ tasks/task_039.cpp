// Read an integer N and print all numbers divisible by 3 from 1 to N //

#include <iostream>

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    std::cout << "your series of numbers: ";

    for (int i = 3; i <= n; i++) {
         if (i%3 == 0) {
            std::cout << i << " ";
         }
    }

    std::cout << std::endl;

return 0;
}
