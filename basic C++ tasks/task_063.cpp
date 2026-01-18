// Write a function that returns the square of a number

#include <iostream>

int sqr (int a) {
return a*a;
}

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    int r = sqr(n);

    std::cout << "result: " << r << std::endl;

return 0;
}
