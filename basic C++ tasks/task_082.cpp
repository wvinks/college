// Read a number N and find the smallest digit

#include <iostream>
#include <cmath>

int main() {
    int n;
    int smallest = 9;

    std::cout << "enter a number: ";
    std::cin >> n;

    n = abs(n);

    while (n > 0) {
          int d = n%10;

          if (d < smallest) {
              smallest = d;
          }
    n = n/10;
    }

    std::cout << "the smallest digit in a number: " << smallest << std::endl;

return 0;
}
