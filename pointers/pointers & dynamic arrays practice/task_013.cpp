// Copy one dynamic array to another using pointers

#include <iostream>

int main() {
    int n = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    int* arr1 = new int[n];
    int* arr2 = new int[n];

    std::cout << "enter a numbers: ";
    for (int i = 0; i < n; i++) {
         std::cin >> arr1[i];
    }

    int* p1 = arr1;
    int* p2 = arr2;

    for (int i = 0; i < n; i++) {
         *p2 = *p1;
         p1++;
         p2++;
    }

    std::cout << "your copy array: ";
    for (int i = 0; i < n; i++) {
         std::cout << arr2[i] << " ";
    }

    std::cout << std::endl;

    delete[] arr1;
    delete[] arr2;

return 0;
}
