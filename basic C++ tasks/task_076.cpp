// Read a number and print true if it belongs to [1; 100]

#include <iostream>

int main() {
    int n;

    std::cout << "enter a number: ";
    std::cin >> n;

    bool check = (n >= 1 && n <= 100);

    if(check) std::cout << "yes" << std::endl;
    else std::cout << "no" << std::endl;

return 0;
}
