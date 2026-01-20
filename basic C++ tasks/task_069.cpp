// Write a function that returns true if a number is negative

#include <iostream>

bool check(int a) {
return a > 0;
}

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    if (check(n)) {
        std::cout << "not negative" << std::endl;
    }

    else {
         std::cout << "negative" << std::endl;
    }

return 0;
}
