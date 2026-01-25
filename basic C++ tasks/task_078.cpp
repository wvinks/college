// Write a function that returns true if a number contains digit 5

#include <iostream>

bool check (int a) {

while (a > 0) {
       int d = a%10;

       if (d == 5) {
           return true;
       }
a = a/10;
}
return false;
}

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    if (check(n)) {
        std::cout << "yes\n";
    }

    else {
         std::cout << "no\n";
    }

return 0;
}
