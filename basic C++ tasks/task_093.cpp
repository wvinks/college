// Read N numbers and find the difference between max and min

#include <iostream>

int main() {
    int n;
    int max = 0;
    int min = 1000000000;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter a numbers: ";

    for (int i = 0; i < n; i++) {
         int x;
         std::cin >> x;

         if (x > max) {
             max = x;
         }

         if (x < min) {
             min = x;
         }
    }

    int r = max - min;

    std::cout << "result: " << r << std::endl;

return 0;
}
