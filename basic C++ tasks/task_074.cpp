// Read N numbers and print how many times the maximum occurs

#include <iostream>

int main() {
    int n;
    int count = 0;
    int max = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter a numbers: ";

    for (int i = 0; i < n; i++) {
         int x;
         std::cin >> x;

         if (x > max) {
             max = x;
             count = 1;
         }

         else if (x == max) {
                  count++;
         }
    }

    std::cout << "maximum repeats: " << count << " times" << std::endl;

return 0;
}

