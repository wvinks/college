// Read N numbers and output the largest even number 

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

         if (x%2 == 0 && x > max) {
             max = x;
         }
    }

    std::cout << "largest even number: " << max << std::endl;

return 0;
}
