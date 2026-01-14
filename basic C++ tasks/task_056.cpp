// Read N numbers and print the maximum of only positive numbers

#include <iostream>

int main() {
    int n;
    int max = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter a numbers: ";

    for (int i = 0; i < n; i++) {
         int x;
         std::cin >> x;

         if (x > 0 && x > max) {
             max = x;
         }
    }

         std::cout << "largest positive number: " << max << std::endl;

return 0;
}
