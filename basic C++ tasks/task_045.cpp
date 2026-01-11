// Read a number N and count how many digits are less than 5 //

#include <iostream>

int main() {
    int n;
    int count = 0;

    std::cout << "enter a number: ";
    std::cin >> n;

    while (n > 0) {
           int d;
           d = n%10;

           if (d < 5) {
               count++;
           }
    n = n/10;
    }

    std::cout << "amount of digits in a number that are less than 5: " << count << std::endl;
 
return 0;
}
