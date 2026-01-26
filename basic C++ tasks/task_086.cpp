// Read a string and print its length

#include <iostream>
#include <string>

int main() {
    std::string s;

    std::cout << "enter a string: ";
    std::getline(std::cin, s);

    std::cout << "length of your string: " << s.length() << std::endl;

return 0;
}
