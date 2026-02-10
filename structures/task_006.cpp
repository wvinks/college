// Зчитай координати двох точок та обчисли відстань між ними

#include <iostream>
#include <cmath>

typedef struct {
        double x;
        double y;
} Point;

int main() {

    Point point1;
    Point point2;

    std::cout << "Point 1 - Enter x: ";
    std::cin >> point1.x;

    std::cout << "Point 1 - Enter y: ";
    std::cin >> point1.y;

    std::cout << "Point 2 - Enter x: ";
    std::cin >> point2.x;

    std::cout << "Point 2 - Enter y: ";
    std::cin >> point2.y;

    double distance = sqrt(((point2.x - point1.x) * (point2.x - point1.x)) + ((point2.y - point1.y) * (point2.y - point1.y)));

    std::cout << "Distance: " << distance << std::endl;

return 0;
}
