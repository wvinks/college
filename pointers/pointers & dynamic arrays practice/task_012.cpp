// Sort a dynamic array in ascending order 

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
         for (int j = 0; j < n - 1; j ++) { //bubble sort 
              if (arr[j] > arr[j + 1]) {
                  int temp = arr[j];
                  arr[j] = arr[j + 1];
                  arr[j + 1] = temp;
              }
         }
    }

    std::cout << "your sorted array: ";
    for (int i = 0; i < n; i++) {
         std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    delete[] arr;

return 0;
}
