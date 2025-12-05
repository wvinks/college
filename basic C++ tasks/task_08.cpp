// Read an integer N and print the sum of all numbers from 1 to N //

#include <iostream>

int main() {
    int n;
    std::cout << "enter the number: ";
    std::cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
    sum += i;
    }

    std::cout << sum << std::endl;
    
return 0;
}
