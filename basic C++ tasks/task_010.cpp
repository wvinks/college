// Read N numbers and print the smallest one //

#include <iostream>

int main() {
    int n;
    int x;

    std::cout << "enter the number of numbers: ";
    std::cin >> n;

    std::cout << "enter the numbers: ";

    int mn;
    std::cin >> mn;

    for (int i = 1; i < n; i++) {
    std::cin >> x;

        if (x < mn) {
            mn = x;
        }
    }

   std::cout << "minimum number: " << mn << std::endl;

return 0;
}            
