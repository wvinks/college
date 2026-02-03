// Create a dynamic array of N elements and fill it

#include <iostream>

int main() {
    int n = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    int *arr = new int[n];

    std::cout << "enter a numbers: ";
    for (int i = 0; i < n; i++) {
         std::cin >> arr[i];
    }

    std::cout << "array elements: ";
    for (int i = 0; i < n; i++) {
         std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    delete[] arr;

return 0;
}
