// Read N and print N×N square of * //

#include <iostream>

int main() {
    int n;
    
    std::cout << "enter the desired side length: ";
    std::cin >> n;

    std::cout << "your square: " << std::endl;

    for (int i  = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
              std::cout << "*";
         }
       std::cout << std::endl;
    }

return 0;
}
