// Оголоси структуру Rectangle з двома точками (лівий нижній і правий верхній кути). Зчитай координати та обчисли площу

#include <iostream>
#include <cmath>

typedef struct {
        double x;
        double y;
} Point;

typedef struct {
        Point bottomLeft;
        Point topRight;
} Rectangle;

int main() {

    Rectangle rectangle;

    std::cout << "Bottom-left - x: ";
    std::cin >> rectangle.bottomLeft.x;

    std::cout << "Bottom-left - y: ";
    std::cin >> rectangle.bottomLeft.y;

    std::cout << "Top-right - x: ";
    std::cin >> rectangle.topRight.x;

    std::cout << "Top-right - y: ";
    std::cin >> rectangle.topRight.y;

    double width = std::abs(rectangle.topRight.x - rectangle.bottomLeft.x);
    double height = std::abs(rectangle.topRight.y - rectangle.bottomLeft.y);

    double area = width * height;

    std::cout << "Area: " << area << std::endl;

return 0;
}
