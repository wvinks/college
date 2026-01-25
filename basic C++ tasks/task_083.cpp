// Read two integers A and B and print all numbers between them (inclusive)

#include <iostream>

int main() {
    int a,b;

    std::cout << "enter lower limit: ";
    std::cin >> a;

    std::cout << "enter upper limit: ";
    std::cin >> b;

    for (int i = a; i <= b; i++) {
         std::cout<< i << " ";
    }

    std::cout << std::endl;

return 0;
}
