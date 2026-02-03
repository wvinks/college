// Find the sum of two numbers using pointers

#include <iostream>

int main() {
    int a = 3;
    int b = 7;

    int* p1 = &a;
    int* p2 = &b;

    int sum = *p1 + *p2;

    std::cout << "result: " << sum << std::endl;

return 0;
}
