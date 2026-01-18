// Write a function helloName that takes a name as a parameter and prints greetingin the format: Hello, Anna!

#include <iostream>
#include <string>

void helloName (std::string name) {
     std::cout << "Hello, " << name << "!" << std::endl;
}

int main() {
    std::string a;

    std::cout << "enter your name: ";
    std::cin >> a;

    helloName(a);

return 0;
}
