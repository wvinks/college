// Read a number N and count how many digits in it are odd //

#include <iostream>

int main() {
    int n;
    int d;
    int count = 0; 

    std::cout << "enter the number: ";
    std::cin >> n;

    while (n > 0) {
          d = n%10;
          n = n/10;

          if (d%2 == 1) {
              count++;
          }
    }

    std::cout << "the number of odd digits in your number: " << count << std::endl;

return 0;
}
