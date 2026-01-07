// Read an integer N and print N lines with the word "Hi!" //

#include <iostream>

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    for (int i; i <= n; i++) {
         std::cout << "Hi!" << std::endl;
    }

return 0;
}
