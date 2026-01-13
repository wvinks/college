// Read a number and check if all its digits are the same

#include <iostream>

int main() {
    int n;
    int ld;
    int d;

    std::cout << "enter a number: ";
    std::cin >> n;

    ld = n%10;

    while (n > 0) {
           d = n%10;
           n = n/10;

           if (ld != d) {
               std::cout << "NO" << std::endl;
               return 0;
           }
    }

    std::cout << "YES" <<  std::endl;

return 0;
}
