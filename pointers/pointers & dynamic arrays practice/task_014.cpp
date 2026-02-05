// Remove an element at a given index from a dynamic array

#include <iostream>

int main() {
    int n = 0;
    int index = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "enter a numbers: ";
    for (int i = 0; i < n; i++) {
         std::cin >> arr[i];
    }

    std::cout << "enter the index of the element you want to delete: ";
    std::cin >> index;

    if (index >= 0 && index < n) {
        for (int i = index; i < n - 1; i++) {
             arr[i] = arr[i + 1];
        } n--;
    }

    else {
         std::cout << "invalid index" << std::endl;
    }

    std::cout << "updated array: ";
    for (int i = 0; i < n; i++) {
         std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    delete[] arr;

return 0;
}
