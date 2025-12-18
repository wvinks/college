// Read an integer N, print sum of all digits //

#include <iostream>

int main() {
    int n;
    int sum = 0;
    int d;

    std::cout << "enter the number: ";
    std::cin >> n;

    while (n > 0) {
         d = n%10;
         sum = sum + d;
         n = n/10;
    }

    std::cout << "the sum of all digits of your number: " << sum << std::endl;

return 0;
}
