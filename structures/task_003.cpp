// Оголоси структуру Point для 2D точки (x, y). Зчитай координати точки та обчисли відстань від початку координат

#include <iostream>
#include <cmath>

typedef struct {
        double x;
        double y;
} Point;

int main() {

    Point pointer1;

    std::cout << "Enter x: ";
    std::cin >> pointer1.x;

    std::cout << "Enter y: ";
    std::cin >> pointer1.y;

    double r = sqrt((pointer1.x * pointer1.x) + (pointer1.y * pointer1.y));

    std::cout << "Distance from origin: " << r << std::endl;

return 0;
}

