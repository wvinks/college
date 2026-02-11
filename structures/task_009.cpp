// Зчитай два комплексні числа та виведи їх суму

#include <iostream>

typedef struct {
        double real;
        double imag;
} Complex;

int main() {

    Complex complex1;
    Complex complex2;

    std::cout << "Complex 1 - real: ";
    std::cin >> complex1.real;

    std::cout << "Complex 1 - image: ";
    std::cin >> complex1.imag;

    std::cout << "Complex 2 - real: ";
    std::cin >> complex2.real;

    std::cout << "Complex 2 - image: ";
    std::cin >> complex2.imag;

    double SumReal = (complex1.real + complex2.real);
    double SumImag = (complex1.imag + complex2.imag);

    std::cout << "Sum: " << SumReal << " + " << SumImag << "i" << std::endl;

return 0;
}
