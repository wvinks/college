// Read N numbers and check if there is at least one zero

#include <iostream>

int main() {
    int n;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter a numbers: ";

    for (int i = 0; i < n; i++) {
         int x;
         std::cin >> x;

         if (x == 0) {
             std::cout << "yes\n";
             return 0;
         }

    }

    std::cout << "no\n";

return 0;
}
