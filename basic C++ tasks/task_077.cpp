// Read a number and return true if all its digits are the same

#include <iostream>

int main() {
    int n;
    bool check = true;

    std::cout << "enter a number: ";
    std::cin >> n;

    int ld = n%10; 

    while (n > 0) {
           int d;
           d = n%10;
           n = n/10;

           if (ld != d) {
              check = false;
           }
    }

    if(check) std::cout << "yes\n";
    else std::cout << "no\n";

return 0;
}
