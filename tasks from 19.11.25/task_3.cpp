#include <iostream>

int main() {
    int width;
    int height;

    std::cout << "enter width: ";
    std::cin >> width;

    std::cout << "enter height: ";
    std::cin >> height;

    for (int h = 0; h < height; h++) {
    for (int w = 0; w < width; w++) {
    std::cout << "*";
    }
  
    std::cout << std::endl; 
    }

    return 0;
}
   


