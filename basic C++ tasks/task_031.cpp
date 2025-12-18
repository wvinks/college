// Read N. Print a left-aligned triangle of height N //

#include <iostream>

int main() {
    int n;

    std::cout << "enter the number N: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
         for (int j = 1; j <= i; j++) {
              std::cout << "*";
         }
         std::cout << std::endl;
    }

return 0;
}
