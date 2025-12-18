// Read N. Print squares of all numbers from 1 to N //

#include <iostream>

int main() {
    int n;

    std::cout << "enter the number: ";
    std::cin >> n;

    std::cout << "your string of squares of numbers: "; 

    for (int i = 1; i <= n; i++) {
        std::cout << i*i << std::endl;
    }

return 0;
}
   
