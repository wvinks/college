// Replacing an element at a given index in a dynamic array

#include <iostream>

int main() {
    int n;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "enter a numbers: ";
    for (int i = 0; i < n; i++) {
         std::cin >> arr[i];
    }

    int index = 0;

    std::cout << "enter the position of the number in the array that you would like to replace: ";
    std::cin >> index;

    int num;

    std::cout << "enter the number you would like to replace: ";
    std::cin >> num;

    int* p = &num;

    if (index >= 0 && index < n) {
        for (int i = 0; i < n; i++) {
             arr[index] = *p;
        }
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
