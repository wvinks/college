// Count how many of the N numbers have exactly two digits //

#include <iostream>

int main() {
    int n;
    int count = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter the numbers: ";

    for (int i = 0; i <= n; i++) {
         int x;
         std::cin >> x;

         if (x >= 10 && x <= 99) {
             count++;
         }
     }

    std::cout << "amount of numbers that have two digits: " << count << std::endl;

return 0;
}


  
