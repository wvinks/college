// Read a number and print all its digits expect zeros //

#include <iostream>

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    std::cout << "your number in digits, expect zeros: " ;

    while (n > 0) {
          int d;
          d = n%10;

          if (d != 0) {
              std::cout << d << " ";
          }
    n = n/10;
    }

    std::cout << std::endl;

return 0;
}
