// Read a number N and count how many times digit 3 appears

#include <iostream>
#include <cmath>

int main() {
    int n;
    int count = 0;

    std::cout << "enter a number: ";
    std::cin >> n;

    n = abs(n);

    while (n > 0) {
           int d = n%10;

            if (d == 3) {
                count++;
            }
    n = n/10;
    }

    std::cout << "amount of digit 3 in a number: " << count << std::endl;

return 0;
}
