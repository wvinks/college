// Read an integer N and print N stars (*) in one line // 

#include <iostream>

int main() {
    int n;

    std::cout << "enter the number: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
    std::cout << "*";
    }

   std::cout <<  std::endl;

return 0;
}
