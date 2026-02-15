// Зчитай дані про 3 товари та знайди найдешевший

#include <iostream>
#include <string>

typedef struct {
        std::string name;
        double price;
} Product;

int main() {

    Product product1;
    Product product2;
    Product product3;

    std::cout << "Product 1 - name: ";
    std::getline(std::cin, product1.name);

    std::cout << "Product 1 - price: ";
    std::cin >> product1.price;

    std::cin.ignore();

    std::cout << "Product 2 - name: ";
    std::getline(std::cin, product2.name);

    std::cout << "Product 2 - price: ";
    std::cin >> product2.price;

    std::cin.ignore();

    std::cout << "Product 3 - name: ";
    std::getline(std::cin, product3.name);

    std::cout << "Product 3 - price: ";
    std::cin >> product3.price;

    double minPrice = product1.price;
    std::string cheapestProduct = product1.name;

    if (product2.price < minPrice) {
        minPrice = product2.price;
        cheapestProduct = product2.name;
    }

    if (product3.price < minPrice) {
        minPrice = product3.price;
        cheapestProduct = product3.name;
    }   

    std::cout << "Cheapest: " << cheapestProduct << " (" << minPrice << " UAH)" << std::endl;

return 0;
}
