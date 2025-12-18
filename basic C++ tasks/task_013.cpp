// Read an integer N and print all numbers from N to 1 //

#include <iostream>

int main() {
    int n;
 
    std::cout << "enter the number n: ";
    std::cin >> n;

    std::cout << "your series of number: ";

    for (int i = n; i >= 1; i--) {
         std::cout << i << " ";
    }

    std::cout << std::endl;

return 0;
}
