// Read N numbers and print only those that are prime

#include <iostream>

bool check(int x) {
     if (x <= 1) {
        return false;
     }

     for (int j = 2; j*j <= x; j++) {
          if (x%j == 0) {
              return false;
          } 
     }
return true;
}

int main() {
    int n;
    int x;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter a numbers: ";

    for (int i = 0; i < n; i++) {
         std::cin >> x;

         if (check(x)) {
             std::cout << x << " ";
         }
    }

    std::cout << std::endl;

return 0;
}
