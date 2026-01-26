// Write a function that checks if a number is prime

#include <iostream>

bool check(int a) {
	if (a <= 1) {
	    return false;
        }

        for (int i = 2; i*i <= a; i++) {
             if (a % i == 0) {
                 return false;
             } 
        }

       return true;
}

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    if (check(n)) {
        std::cout << "the number is prime";
    }

    else {
         std::cout << "the number is not prime";
    }

    std::cout << std::endl;

return 0;
}
