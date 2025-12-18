// Read N numbers, find the smallest positive one //

#include <iostream>

int main() {
    int n;
    int mp = 1000000;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter the numbers: ";

    while (n > 0) {
           int x;
           std::cin >> x;
          if (x > 0 && x < mp) {
             mp = x;
          }   
    n--;
    }

   std::cout << "the smallest positive number: " << mp << std::endl;

return 0;
}
