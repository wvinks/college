// Read N numbers and find the sum of those greater than 10 //

#include <iostream>

int main() {
    int n;
    int sum = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter a numbers: ";

    for (int i = 0; i < n; i++) {
         int x;
         std::cin >> x;

         if (x > 10) {
             sum = sum + x;
         }
    }

    std::cout << "sum of numbers greater than 10: " << sum << std::endl;

return 0;
}
