// Оголоси структури Product і Order (товар + кількість). Зчитай дані та обчисли вартість замовлення

#include <iostream>
#include <string>

typedef struct {
        std::string name;
        double price;
} Product;

typedef struct {
        Product product;
        int quantity;
} Order;

int main() {

    Order order1;

    std::cout << "Product name: ";
    std::getline (std::cin, order1.product.name);

    std::cout << "Product price: ";
    std::cin >> order1.product.price;

    std::cout << "Order quantity: ";
    std::cin >> order1.quantity;

    double total = order1.quantity * order1.product.price;

    std::cout << "Order total: " << total << std::endl;

return 0;
}
