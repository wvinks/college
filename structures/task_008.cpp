// Зчитай дані про два товари та виведи, який дорожчий

#include <iostream>
#include <string>

typedef struct {
        std::string name;
        double price;
} Product;

int main() {

    Product product1;
    Product product2;

    std::cout << "Product 1 - name: ";
    std::getline(std::cin, product1.name);

    std::cout << "Product 1 - price: ";
    std::cin >> product1.price;

    std::cin.ignore();

    std::cout << "Product 2 - name: ";
    std::getline(std::cin, product2.name);

    std::cout << "Product 2 - price: ";
    std::cin >> product2.price;

    if (product1.price > product2.price) {
        std::cout << product1.name << " is more expensive" << std::endl;
    }

    else if (product2.price > product1.price) {
         std::cout << product2.name << " is more expensive" << std::endl;
    }

    else {
         std::cout << "Both products have the same price" << std::endl;
    }

return 0;
}
