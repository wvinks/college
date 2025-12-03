#include <iostream>
#include <string>

int main() {
    std::string a;

std::cout << "enter text: ";
std::getline (std::cin, a);

int len = a.size();

std::cout << "term length: " << len << std::endl;

return 0;
}


