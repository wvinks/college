// Read N numbers and count how many of them are both two-digit and even //

#include <iostream>

int main() {
    int n;
    int count = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter the numbers: ";

    for (int i = 0; i < n; i++) {
         int x;
         std::cin >> x;

         if (x >= 10 && x <= 99 && x%2==0) {
             count++;
         }
    }

    std::cout << "amount of numbers that are both two-digit and even: " << count << std::endl;

return 0;
}
 
