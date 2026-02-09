// Оголоси структуру Rectangle (ширина, висота). Зчитай розміри та виведи площу і периметр

#include <iostream>

typedef struct {
        double width;
        double height;
} Rectangle;

int main() {

    Rectangle rectangle1;

    std::cout << "Enter width: ";
    std::cin >> rectangle1.width;

    std::cout << "Enter height: ";
    std::cin >> rectangle1.height;

    double area = rectangle1.width * rectangle1.height;
    double perimeter = ((2 * rectangle1.width) + (2 * rectangle1.height));

    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;

return 0;
}

