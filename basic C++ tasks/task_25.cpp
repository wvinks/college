// Read a number N, count how many zero at the end (e.g. 12000 -> 3) //

#include <iostream>

int main() {
    int n;
    int count = 0;

    std::cout << "enter the number: ";
    std::cin >> n;

    while (n%10 == 0) {
           count++;
           n = n/10;    
    }

    std::cout << "amount of zeros at the end: " << count << std::endl;

return 0;
}
