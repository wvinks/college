// Read two integers and swap their values //

#include <iostream>

int main() {
    int a,b;

    std::cout << "enter the first number: ";
    std::cin >> a;

    std::cout << "enter the second number: ";
    std::cin >> b;

    int t = a;
    a = b;
    b = t;

    std::cout << "numbers are reversed: " << a << " " << b << std::endl;

return 0;
}
