#include <iostream>
#include <cmath>

int main() {
    double a;
    double x;
    double y;
    double b;
    double c;

    std::cout << "Calculation of the purchase price, taking into account the discount" << std::endl;
    std::cout << "enter the value of your purchase: ";
    std::cin >> a;

    if (a > 500 && a <= 1000) {
        x = a * 0.03;
        y = a - x;
        std::cout << "the discounted value of your purchase: " << y << " ₴" << std::endl;
    }

    else if (a > 1000) {
            b = a * 0.05;
            c = a - b;
            std::cout << "the discounted value of your purchase: " << c << " ₴" << std::endl;
    }  

    else {
         std::cout << "no discout" << std::endl;
    }

return 0;
}
