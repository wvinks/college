// Compare two numbers using pointers and find the larger one

#include <iostream>

int main() {
    int a;
    int b;

    std::cout << "enter the first number: ";
    std::cin >> a;

    std::cout << "enter the second number: ";
    std::cin >> b;

    int* p1 = &a;
    int* p2 = &b;

    if (*p1 > *p2) {
        std::cout << "larger number: " << *p1 << std::endl;
    }

    else if (*p2 > *p1) {
         std::cout << "larger number: " << *p2 << std::endl;
    }

    else {
         std::cout << "numbers are equal" << std::endl;
    }

return 0;
}
