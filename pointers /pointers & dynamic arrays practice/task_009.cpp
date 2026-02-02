// Count the number of even elements in a dynamic array

#include <iostream>

int main() {
    int n = 0;
    int count = 0;

    std::cout << "enter how many numbers: "; 
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "enter a numbers: ";
    for (int i = 0; i < n; i++) {
         std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
         if (arr[i] % 2 == 0) {
             count++;
         }
    }

    if (count == 0) {
        std::cout << "no even numbers" << std::endl;
    }

    else {
         std::cout << "amount of even numbers: " << count << std::endl;
    }

    delete[] arr;

return 0;
}
