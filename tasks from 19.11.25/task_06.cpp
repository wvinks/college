#include <iostream> 
#include <cmath>

int main() {
    double a;
    double b;
    double c;
    double D;
    double x1;
    double x2;
    double x;

    std::cout << "ax^2 + bx + c = 0" << std::endl;
    std::cout << "enter a: ";
    std::cin >> a;

    std::cout << "enter b: ";
    std::cin >> b;

    std::cout << "enter c: ";
    std::cin >> c;

    D = b * b - 4 * a *c;    

    if (D > 0) {
        x1 = (-b + std::sqrt(D)) / (2 * a);
        x2 = (-b - std::sqrt(D)) / (2 * a);

        std::cout << "roots of the equation: " << std::endl;
        std::cout << "x1 =  " << x1 << std::endl;
        std::cout << "x2 =  " << x2 << std::endl;
   }

   else if (D == 0) {
            x = (-b)/(2 * a);
            std::cout << "root of the equation: " << std::endl;
            std::cout << "x = " << x << std::endl;
   }

   else {
        std::cout << "there are no roots of the equation" << std::endl;
   }

return 0;
}
