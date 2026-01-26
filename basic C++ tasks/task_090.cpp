// Write a function that returns the sum of digits of a number

#include <iostream>

int sum_d(int a) {

    int sum = 0;

    while (a > 0) {
           int d = a % 10;
           sum = sum + d;
           a = a/10;
    }

    return sum;
}

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    int r = sum_d(n);

    std::cout << "sum of digits in your number: " << r << std::endl;

return 0;
}

