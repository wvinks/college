// Write a function that checks if a number is odd

#include <iostream>

bool check (int n) {
return n%2 == 0;
}

int main() {
    int a;

    std::cout << "enter a number: ";
    std::cin >> a;

    if (check(a)) {
        std::cout << "your number is not odd" << std::endl;
    }

    else {
         std::cout << "your number is odd" << std::endl;
    }

return 0;
}
