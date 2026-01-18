// Write a function that returns the sum of two numbers

#include <iostream>

int sum (int a, int b) {
         return a + b;
}

int main() {
    int x, y;
    int r = 0;

    std::cout << "enter the first number: ";
    std::cin >> x;

    std::cout << "enter the second number: ";
    std::cin >> y;

    r = sum(x, y);

    std::cout << "result: " << r << std::endl;

return 0;
}
