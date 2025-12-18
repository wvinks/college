// Read an integer N and print all even numbers from 1 to N //

#include <iostream>

int main() {
    int n;
    int i;
    
    std::cout << "enter a number: ";
    std::cin >> n;

    std::cout << "all even numbers: ";   

    for (int i = 1; i <= n; i++) {

         if (i%2 ==  0) {
             std::cout << i << " ";
         }
    }

    std::cout << std::endl;    

return 0;
}
