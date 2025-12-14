// Read an integer N and print all odd numbers from N down to 1 //

#include <iostream>
int main() {
    int n;

    std::cout << "enter the number: ";
    std::cin >> n;

    std::cout << "odd numbers from N to 1: ";

    for (int i = n; i >= 1; i--) {
         if (i%2 == 1) {
             std::cout << i << " ";
         }
    }

    std::cout << std::endl;
 
return 0;
}
