// Read the word and count how many vowels it has

#include <iostream>
#include <string>

int main() {
    std::string w;
    int count = 0;

    std::cout << "enter a word: ";
    std::cin >> w;

    for (char c : w) {
         if (c == 'A' || c == 'a' || c == 'O' || c == 'o' || c == 'E' || c == 'e' || c == 'U' || c == 'u' || c == 'I' || c == 'i') {
             count++;
         }
    }

    std::cout << "amount of vowels in your word: " << count << std::endl;

return 0;
}
