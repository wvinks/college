// Write a function that returns the difference of two numbers

#include <iostream>

int dif(int a, int b) {
        return a - b;
}

int main() {
    int x, y;

    std::cout << "enter the first number: ";
    std::cin >> x;

    std::cout << "enter the second number: ";
    std::cin >> y;

    int r = dif(x, y);

    std::cout << "result: " << r << std::endl;

return 0;
}
