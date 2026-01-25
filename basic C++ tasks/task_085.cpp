// Read a string and count how many times letter a appears

#include <iostream>
#include <string>

int main() {
    std::string s;
    int count = 0;

    std::cout << "enter a string: ";
    std::cin >> s;

    for (char c : s) {
         if (c == 'a' || c == 'A') {
             count++;
         }
    }

    std::cout << "amount letters a in a string: " << count << std::endl;

return 0;
} 
