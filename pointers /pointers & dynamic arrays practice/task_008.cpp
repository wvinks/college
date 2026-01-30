// Find the minimum and maximum values in a dynamic array

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

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
         if (arr[i] > max) {
             max = arr[i];
         }

         if (arr[i] < min) {
             min = arr[i];
         }
    }

    std::cout << "minimum value: " << min << std::endl;
    std::cout << "maximum value: " << max << std::endl;

    delete[] arr;

return 0;
}

