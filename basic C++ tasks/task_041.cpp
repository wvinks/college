// Read N numbers and count how many of them are odd //

#include <iostream>

int main() {
    int n;
    int count = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter a numbers: ";

    for (int i = 0; i <= n; i++) {
         int x;
         std::cin >> x;

         if (x%2 == 1) {
             count++;
         }
    }

    std::cout << "amount odd numbers: " << count << std::endl;

return 0;
}
