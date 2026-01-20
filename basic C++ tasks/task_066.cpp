// Write a function that returns the larger of two numbers

#include <iostream>

int larger(int a, int b) {

    if (a > b) {
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

    int r = check(x,y);

    std::cout << "the largest of two numbers: " << r << std::endl;

return 0;
}
