// Print the array in reverse order using pointers

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

    std::cout << "array in reverse order: ";
    for (int* p  = arr + n - 1; p >= arr; p--) {
         std::cout << *p << " ";
    }

    std::cout << std::endl;

    delete[] arr;

return 0;
}
