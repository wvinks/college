#include <iostream>
#include <string>

int main() {
    std::string s; 
    
    std::cout << "Checking, if the string you entered is an ice cream sandwich" << std::endl;
    std::cout << "enter a string: ";
    std::cin >> s;

    int n = s.length();

    if (n < 3) {
       std::cout << "it's not an ice cream sandwich" << std::endl;
       return 0;
    }

    int l = 0;
    int r = n - 1;
    
    char e = s[0];

    while (l < n && s[l] == e) 
           l++;

    while (r >= 0 && s[r] == e)
           r--;

    if (l == 0 || r < l) {
        std::cout << "it's not an ice cream sandwich" << std::endl;
        return 0;
    }

    char m = s[l];

    for (int i = l; i <= r; i++) {
         if (s[i] != m || m == e) {
            std::cout << "it's not an ice cream sandwich" << std::endl;
            return 0;
         }
    }

   std::cout << "it's ice cream sandwich" << std::endl;

return 0;
}


