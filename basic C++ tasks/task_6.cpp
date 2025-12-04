// Read N numbers and count how many of them are positive //

#include <iostream>

int main() {
    int n;
    int count = 0;

    std::cout << "enter the number of numbers: ";
    std::cin >> n;

    std::cout  << "enter the numbers (in the column): ";     

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
 
        if (x > 0) {
        count ++;
        }
    }

    std::cout << "the number of posistive numbers: " << count << std::endl;

return 0;
}
