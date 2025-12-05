// Read three integers and print the largest of them //

#include <iostream>

int main() {

    int a;
    int b;
    int c;
  
  std::cout << "enter the first number : ";
  std::cin >> a;

  std::cout << "enter the second number: ";
  std::cin >> b;

  std::cout << "enter the third number: ";
  std::cin >> c;

if (a>b && a>c)
  std::cout << "the largest number: " << a << std::endl;

else if (b>c &&  b>a)
  std::cout << "the largest number: " << b << std::endl;

else 
  std::cout << "the largest number:" << c << std::endl;

return 0;
} 
