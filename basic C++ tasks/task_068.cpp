// Write a function that returns true if a number is positive

#include <iostream>

bool check(int a) {
return a > 0;
}

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    if (check(n)) {
        std::cout << "positive" << std::endl;
    }

    else {
         std::cout << "not positive" << std::endl;
    }

return 0;
}

