// Оголоси структуру Product з полями: назва, ціна, кількість. Зчитай дані та виведи загальну вартість (ціна × кількість)

#include <iostream>
#include <string>

typedef struct {
        std::string name;
        double price;
        int quantity;
} Product;

int main() {

    Product product1;

    std::cout << "Enter the product name: ";
    std::getline(std::cin, product1.name);

    std::cout << "Enter price: ";
    std::cin >> product1.price;

    std::cout << "Enter quantity: ";
    std::cin >> product1.quantity;

    double r = product1.price * product1.quantity;

    std::cout << "Total price: " << r << std::endl;

return 0;
}
