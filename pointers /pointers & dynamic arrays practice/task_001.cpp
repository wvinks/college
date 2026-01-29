// Swap two variables using pointer

#include <iostream>

int main() {
     int a = 5;
     int b = 10;

     int* p1 = &a;
     int* p2 = &b;

     int value1 = *p1;
     int value2 = *p2;

     int temp = *p1;
     *p1 = *p2;
     *p2 = temp;

     std::cout << *p1 << " " << *p2 << std::endl;

return 0;
}
