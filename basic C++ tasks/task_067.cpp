// Write a function that returns the smaller of two numbers

#include <iostream>

int min(int a, int b) {

    if (a < b) {
        return a;
    }

    else {
         return b;
    }
}

int main () {
    int x, y;

    std::cout << "enter the first number: ";
    std::cin >> x;

    std::cout << "enter the second number: ";
    std::cin >> y;

    int r = min(x,y);

    std::cout << "the smaller of two numbers: " << r << std::endl;

return 0;
}
