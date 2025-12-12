// Read a number N and count how many digits in it are equal to 5 //

#include <iostream>

int main() {
    int n;
    int count = 0;

    std::cout << "enter the number: ";
    std::cin >> n;

    while (n > 0) {
         int d;
         d = n%10;

         if (d == 5) {
             count++;
         }
    n = n/10;
    }

    std::cout << "amount of digits in a number that equal 5: " << count << std::endl;

return 0;
}


