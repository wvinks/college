// Read N and print every third number: 3, 6, 9... //

#include <iostream>

int main() {
    int n;
    
    std::cout << "enter the number: ";
    std::cin >> n;

    std::cout << "your series of number: ";

    for (int i = 3; i <= n; i+=3) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

return 0;
}
