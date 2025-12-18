// Read an integer N and print its last digit //

#include <iostream>

int main() {
    int n;
    int l;    

    std::cout << "enter the number: ";
    std::cin >> n;

    l = n%10;   

    std::cout << "the last digit of your number: " << l << std::endl; 

return 0;
}

