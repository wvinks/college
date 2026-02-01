// Read N numbers. Count how many numbers are greater than the previous one.

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

    for (int i = 1; i < n; i++) {
         if (arr[i] > arr[i - 1]) {
             count++;
         }
    }

    std::cout << "amount of numbers that are greater than the previos one: " << count << std::endl;

    delete[] arr;

return 0;
}
