// Read N numbers and count how many of them are divisible by 5 //

#include <iostream>

int main() {
    int n;
    int count = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter the numbers: ";

    for (int i = 1; i < n; i++) {
        int x;
        std::cin >> x;
     
        if (x%5 == 0) {
            count++;
        }
    }
     
     std::cout << "numbers that are divisible by 5: " << count << std::endl;
 
return 0;
}        
