// Write a function that returns the maximum of three numbers

#include <iostream>

int max(int a, int b, int c) {

        if (a >= b && a >= c) {
            return a;
        }

        else if (b >= a && b >= c) {
                 return b;
        }

        else {
             return c;
        }
}

int main() {
    int x,y,z;

    std::cout << "enter the first number: ";
    std::cin >> x;

    std::cout << "enter the second number: ";
    std::cin >> y;

    std::cout << "enter the third number: ";
    std::cin >> z;

    int r = max(x,y,z);

    std::cout << "maximum of three numbers: " << r << std::endl;

return 0;
}
