// Read N numbers and print the first negative one 

#include <iostream>

int main() {
    int n;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter a numbers: ";

    for (int i = 0; i < n; i++) {
         int x;
         std::cin >> x;

         if (x < 0) {
             std::cout << "the first negative number: " << x << std::endl;
             return 0;
         }
    }

    std::cout << "there are no negative numbers" << std::endl;
    return 0;
}
