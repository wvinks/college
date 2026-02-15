// Зчитай дані про 3 товари (назва, ціна, кількість) та обчисли загальну вартість складу

#include <iostream>
#include <string>

typedef struct {
        std::string name;
        double price;
        int quantity;
} Product;

int main() {

    Product product1;
    Product product2;
    Product product3;

    std::cout << "Product 1 - name: ";
    std::getline(std::cin, product1.name);

    std::cout << "Product 1 - price: ";
    std::cin >> product1.price;

    std::cout << "Product 1 - quantity: ";
    std::cin >> product1.quantity;

    std::cin.ignore();

    std::cout << "Product 2 - name: ";
    std::getline(std::cin, product2.name);

    std::cout << "Product 2 - price: ";
    std::cin >> product2.price;

    std::cout << "Product 2 - quantity: ";
    std::cin >> product2.quantity;

    std::cin.ignore();

    std::cout << "Product 3 - name: ";
    std::getline(std::cin, product3.name);

    std::cout << "Product 3 - price: ";
    std::cin >> product3.price;

    std::cout << "Product 3 - quantity: ";
    std::cin >> product3.quantity;

    double total1 = product1.quantity * product1.price;
    double total2 = product2.quantity * product2.price;
    double total3 = product3.quantity * product3.price;

    double finalTotal = total1 + total2 + total3;

    std::cout << "Total warehouse value: " << finalTotal << std::endl;

return 0;
}
