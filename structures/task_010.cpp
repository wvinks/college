// Зчитай два прямокутники та виведи, який має більшу площу

#include <iostream>

typedef struct {
         double width;
         double height;
} Rectangle;

int main() {

    Rectangle rectangle1;
    Rectangle rectangle2;

    std::cout << "Rectangle 1 - width: ";
    std::cin >> rectangle1.width;

    std::cout << "Rectangle 1 - height: ";
    std::cin >> rectangle1.height;

    std::cout << "Rectangle 2 - width: ";
    std::cin >> rectangle2.width;

    std::cout << "Rectangle 2 - height: ";
    std::cin >> rectangle2.height;

    double area1 = rectangle1.width * rectangle1.height;
    double area2 = rectangle2.width * rectangle2.height;

    if (area1 > area2) {
        std::cout << "Rectangle 1 is larger (area: " << area1 << ")" << std::endl;
    }

    else if (area2 > area1) {
             std::cout << "Rectangle 2 is larger (area: " << area2 << ")" << std::endl;
    }

    else {
         std::cout << "The rectangles have the same area" << std::endl;
    }

return 0;
}
