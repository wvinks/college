// Read N numbers and print only positive ones

#include <iostream>

int main() {
    int n;
    int x;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter a numbers: ";

    for (int i = 0; i < n; i++) {
         std::cin >> x;

         if (x > 0) {
             std::cout << x << " ";
         }
    }

    std::cout << std::endl;

return 0;
}
