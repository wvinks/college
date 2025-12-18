// Read N numbers and count how many of them are negative //

#include <iostream>

int main() {
    int n;
    int count = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter the numbers: ";

    for (int i = 0; i < n; i++) {
         int x;
         std::cin >> x;

         if (x < 0) {
             count++;
         }
    }

    std::cout << "the number of negative numbers: " << count << std::endl;

return 0;
}
