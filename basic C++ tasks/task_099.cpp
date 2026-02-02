// Create a dynamic array of N integers. Count how many elements are greater than 0 and print the count

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
         if (arr[i] > 0) {
             count++;
         }
    }

    std::cout << "amount of numbers that are greater than 0: " << count << std::endl;

    delete[] arr;

return 0;
}
