#include <iostream>
#include <cmath>

int main() {
    double a;
    double V0;
    double const g = 9.8;
    double L;
    double ar;
    double const pi = 3.14;


    std::cout << "The distance traveled by a body thrown at an angle a to the horizon with the initial speed V0. " << std::endl;
    std::cout << "enter angle to the horizon (a): ";
    std::cin >> a;
 
    std::cout << "enter initial speed (V0): ";
    std::cin >> V0;

    ar = a * (pi / 180);

    L = (V0 * V0) * (std::sin(2 * ar)) / g;

    std::cout << "flight range = " << L << " meters" << std::endl;

return 0;
} 

// ar - the angle (in degrees), entered by the user - in radians //
