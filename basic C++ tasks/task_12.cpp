// Read N numbers and count how many of them are equal to 0 //

#include <iostream>

int main() {
    int n;
    int x;
    int count = 0;

    std::cout << "enter amount of numbers: ";
    std::cin >> n;

    std::cout << "enter a numbers: "; 

    for (int i = 1; i <= n; i++) {
         std::cin >> x;

         if (x == 0) {
             count++;
         }
    }

    std::cout << "numbers equal to zero: " << count << std::endl;
   
return 0;
}
