// Print all numbers from 1 to N //

#include <iostream>

int main() {
    int n;
   
  std::cout << "enter the number n: ";
  std::cin >> n;

  std::cout << "your series of numbers: ";

  for (int i = 1; i <= n; i++) {
  std::cout << i << " ";
  }

  std::cout << std::endl;

return 0;
}
