// Read N numbers and determine if all numbers are unique

#include <iostream>

int main() {
    int n = 0;
    bool check = true;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "enter a numbers: ";
    for (int i = 0; i < n; i++) {
         std::cin >> arr[i];

         for (int j = i + 1; j < n; j++) {
              if (arr[i] == arr[j]) {
                   check = false;
                   break;  
            }
         }
         if (!check) 
             break;
    }

    if (check) {
        std::cout << "yes" << std::endl;
    }

    else {
         std::cout << "no" << std::endl;
    }

    delete[] arr;

return 0;
}
