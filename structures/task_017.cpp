// Оголоси структуру Segment з двома точками (початок і кінець). Зчитай координати та обчисли довжину відрізка

#include <iostream>
#include <cmath>

typedef struct {
        double x;
        double y;
} Point;

typedef struct {
        Point start;
        Point end;
} Segment;

int main() {

    Segment segment;

    std::cout << "Enter x1: ";
    std::cin >> segment.start.x;

    std::cout << "Enter y1: ";
    std::cin >> segment.start.y;

    std::cout << "Enter x2: ";
    std::cin >> segment.end.x;

    std::cout << "Enter y2: ";
    std::cin >> segment.end.y;

    double length = sqrt(((segment.end.x - segment.start.x) * (segment.end.x - segment.start.x)) + ((segment.end.y - segment.start.y) * (segment.end.y - segment.start.y))); 

    std::cout << "Segment length: " << length << std::endl;

return 0;
}
