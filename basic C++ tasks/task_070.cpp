// Write a function that returns true if a number is divisible by 7

#include <iostream>

bool check(int a) {
return a%7 == 0;
}

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    if (check(n)) {
        std::cout << "yes, the number is divisible by 7" << std::endl;
    }

    else {
         std::cout << "no, the number is not divisible by 7" << std::endl;
    }

return 0;
}
