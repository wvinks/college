// Read N numbers, count how many are 100 or more //

#include <iostream>

int main() {
    int n;
    int count = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter the numbers: ";

    for (int i = 1; i <= n; i++) {
         int x;
         std::cin >> x;
  
         if (x >= 100) {
             count++;
         }
    }

    std::cout << "amount of numbers 100 or more: " << count << std::endl;

return 0;
}
