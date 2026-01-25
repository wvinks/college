// Read N numbers and determine if the sequence is increasing

#include <iostream>

int main() {
    int n;
    int f = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter a numbers: ";

    for (int i = 0; i < n; i++) {
         int x;
         std::cin >> x;

         if (x > f) {
             f = x;
         }

         else {
              std::cout << "no\n";
              return 0;
         }
    }

    std::cout << "yes\n";

return 0;
}
