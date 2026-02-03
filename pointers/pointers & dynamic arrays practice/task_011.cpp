// Replace all negative numbers with 0 using pointers

#include <iostream>

int main() {
    int n = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "enter a numbers: ";
    for (int i = 0; i < n; i++) {
         std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
         if (arr[i] < 0) {
             arr[i] = 0;
         }
    }

    std::cout << "array elements with negative numbers replaced by 0: ";
    for (int i = 0; i < n; i++) {
         std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    delete[] arr;

return 0;
}
