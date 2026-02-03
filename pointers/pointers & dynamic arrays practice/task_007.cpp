// Find the sum of elements in a dynamic array

#include <iostream>

int main() {
    int n = 0;
    int sum = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    int *arr = new int[n];

    std::cout << "enter a numbers: ";
    for (int i = 0; i < n; i++) {
         std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
         sum = sum + arr[i];
    }

    std::cout << "result: " << sum << std::endl;

    delete[] arr;

return 0;
}

