// Count how many elements in a dynamic array are greater than the average value

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

    double sum = 0;

    for (int i = 0; i < n; i++) {
         sum = sum + arr[i];
    }

    double average = sum/n;

    for (int i = 0; i < n; i++) {
         if (arr[i] > average) {
             count++;
         }
    }

    std::cout << "result: " << count << std::endl;

    delete[] arr;

return 0;
}
