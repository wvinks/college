// Read a name an greet the user

#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "enter your name: ";
    std::cin >> name;

    std::cout << "hello " << name << "!" << std::endl;

    return 0;
}
