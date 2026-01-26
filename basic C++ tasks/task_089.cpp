// Write a function that counts digits in a number

#include <iostream>

int count_d(int a) {

    int count = 0;

    while (a > 0) {
           count++;
           a = a/10;
    }

    return count;
}

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    int r = count_d(n);

    std::cout << "amount of digits in your number: " << r << std::endl;

return 0;
}
