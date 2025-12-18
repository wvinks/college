// Read N numbers, output their product //

#include <iostream>

int main() {
    int n;
    int p = 1;
    int x;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter the numbers: ";

    for (int i; i < n; i++) {
         std::cin >> x;
         p = p * x;
    }

    std::cout << "your product of numbers: " << p << std::endl;

return 0;
}
