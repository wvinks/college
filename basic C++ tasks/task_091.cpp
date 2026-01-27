// Write a function that prints numbers from 1 to N

#include <iostream>
#include <cmath>

void print_N() {
     int n;

     std::cout << "enter a number: ";
     std::cin >> n;

     n = std::abs(n);

     for (int i = 1; i <= n; i++) {
          std::cout << i << " ";
     }
}

int main() {

     print_N();

    std::cout <<  std::endl;

return 0;
}
