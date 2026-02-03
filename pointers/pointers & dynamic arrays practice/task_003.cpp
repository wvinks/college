// Increase a variable by 1 using a pointer

#include <iostream>

int main() {
    int a = 9;
    int* p = &a;
    *p = *p + 1;

    std::cout << a << std::endl;

return 0;
}
