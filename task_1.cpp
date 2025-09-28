#include <iostream>

int main() {
    int a, b;
    std::cout <<"first number:";
    std::cin >> a;
    std::cout <<"second number:";
    std::cin >> b;

    if (a > b) {
       int temp = a;
       a = b;
       b = temp;
    }


    int sum = 0;

    for (int i = a; i <= b; i++) {
        if (i % 2 ==0) {
           sum = sum + i;
        }
    }

   std::cout <<"sum of even numbers = " << sum << std::endl;

   return 0;

}
