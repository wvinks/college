// Read a number N and find the largest digit in it //

#include <iostream>

int main() {
    int n;
    int max = 0;

    std::cout << "enter a number: ";
    std::cin >> n;

    while (n > 0) {
          int d;
          d = n%10;
          n= n/10;

          if (d > max) {
              max = d;
          }
    }

    std::cout << "the largest digit in your number: " << max << std::endl;

return 0;
}
