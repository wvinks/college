// Write a function that returns the absolute value of a number

#include <iostream>
#include <cmath>

int av(int a) {
    return abs(a);
}

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    int r = av(n);

    std::cout << "absolute value of number: " << r << std::endl;

return 0;
}

